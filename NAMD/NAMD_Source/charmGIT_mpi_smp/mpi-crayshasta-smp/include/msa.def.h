/* ---------------- method closures -------------- */
#ifdef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 

    struct Closure_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::AckPage_2_closure : public SDAG::Closure {
            unsigned int page;


      AckPage_2_closure() {
        init();
      }
      AckPage_2_closure(CkMigrateMessage*) {
        init();
      }
            unsigned int & getP0() { return page;}
      void pup(PUP::er& __p) {
        __p | page;
        packClosure(__p);
      }
      virtual ~AckPage_2_closure() {
      }
      PUPable_decl_template(SINGLE_ARG(AckPage_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 

    struct Closure_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::ReceivePage_3_closure : public SDAG::Closure {
            unsigned int page;
            ENTRY_TYPE *pageData;
            int size;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      ReceivePage_3_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      ReceivePage_3_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            unsigned int & getP0() { return page;}
            ENTRY_TYPE *& getP1() { return pageData;}
            int & getP2() { return size;}
      void pup(PUP::er& __p) {
        __p | page;
        __p | size;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<unsigned int> page;
  implP|page;
  int impl_off_pageData, impl_cnt_pageData;
  implP|impl_off_pageData;
  implP|impl_cnt_pageData;
  PUP::detail::TemporaryObjectHolder<int> size;
  implP|size;
          impl_buf+=CK_ALIGN(implP.size(),16);
          pageData = (ENTRY_TYPE *)(impl_buf+impl_off_pageData);
        }
      }
      virtual ~ReceivePage_3_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl_template(SINGLE_ARG(ReceivePage_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 

    struct Closure_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::ReceivePageWithPUP_4_closure : public SDAG::Closure {
            unsigned int page;
            MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> pageData;
            int size;


      ReceivePageWithPUP_4_closure() {
        init();
      }
      ReceivePageWithPUP_4_closure(CkMigrateMessage*) {
        init();
      }
            unsigned int & getP0() { return page;}
            MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> & getP1() { return pageData;}
            int & getP2() { return size;}
      void pup(PUP::er& __p) {
        __p | page;
        __p | pageData;
        __p | size;
        packClosure(__p);
      }
      virtual ~ReceivePageWithPUP_4_closure() {
      }
      PUPable_decl_template(SINGLE_ARG(ReceivePageWithPUP_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 

    struct Closure_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::enroll_5_closure : public SDAG::Closure {
      

      enroll_5_closure() {
        init();
      }
      enroll_5_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~enroll_5_closure() {
      }
      PUPable_decl_template(SINGLE_ARG(enroll_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 

    struct Closure_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::enroll_6_closure : public SDAG::Closure {
            unsigned int numberOfWorkerThreads;


      enroll_6_closure() {
        init();
      }
      enroll_6_closure(CkMigrateMessage*) {
        init();
      }
            unsigned int & getP0() { return numberOfWorkerThreads;}
      void pup(PUP::er& __p) {
        __p | numberOfWorkerThreads;
        packClosure(__p);
      }
      virtual ~enroll_6_closure() {
      }
      PUPable_decl_template(SINGLE_ARG(enroll_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 

    struct Closure_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::enrollAck_7_closure : public SDAG::Closure {
            int originator;


      enrollAck_7_closure() {
        init();
      }
      enrollAck_7_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return originator;}
      void pup(PUP::er& __p) {
        __p | originator;
        packClosure(__p);
      }
      virtual ~enrollAck_7_closure() {
      }
      PUPable_decl_template(SINGLE_ARG(enrollAck_7_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 

    struct Closure_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::enrollDone_8_closure : public SDAG::Closure {
      

      enrollDone_8_closure() {
        init();
      }
      enrollDone_8_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~enrollDone_8_closure() {
      }
      PUPable_decl_template(SINGLE_ARG(enrollDone_8_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 

    struct Closure_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::SyncAck_9_closure : public SDAG::Closure {
            bool clear;


      SyncAck_9_closure() {
        init();
      }
      SyncAck_9_closure(CkMigrateMessage*) {
        init();
      }
            bool & getP0() { return clear;}
      void pup(PUP::er& __p) {
        __p | clear;
        packClosure(__p);
      }
      virtual ~SyncAck_9_closure() {
      }
      PUPable_decl_template(SINGLE_ARG(SyncAck_9_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 

    struct Closure_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::FinishSync_11_closure : public SDAG::Closure {
      

      FinishSync_11_closure() {
        init();
      }
      FinishSync_11_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~FinishSync_11_closure() {
      }
      PUPable_decl_template(SINGLE_ARG(FinishSync_11_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 

    struct Closure_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::emitBufferValue_12_closure : public SDAG::Closure {
            int ID;
            unsigned int pageNum;
            unsigned int offset;


      emitBufferValue_12_closure() {
        init();
      }
      emitBufferValue_12_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return ID;}
            unsigned int & getP1() { return pageNum;}
            unsigned int & getP2() { return offset;}
      void pup(PUP::er& __p) {
        __p | ID;
        __p | pageNum;
        __p | offset;
        packClosure(__p);
      }
      virtual ~emitBufferValue_12_closure() {
      }
      PUPable_decl_template(SINGLE_ARG(emitBufferValue_12_closure));
    };
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifdef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 

    struct Closure_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::setCacheProxy_2_closure : public SDAG::Closure {
            CProxy_MSA_CacheGroup<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> cache;


      setCacheProxy_2_closure() {
        init();
      }
      setCacheProxy_2_closure(CkMigrateMessage*) {
        init();
      }
            CProxy_MSA_CacheGroup<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> & getP0() { return cache;}
      void pup(PUP::er& __p) {
        __p | cache;
        packClosure(__p);
      }
      virtual ~setCacheProxy_2_closure() {
      }
      PUPable_decl_template(SINGLE_ARG(setCacheProxy_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 

    struct Closure_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::GetPage_3_closure : public SDAG::Closure {
            int pe;


      GetPage_3_closure() {
        init();
      }
      GetPage_3_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return pe;}
      void pup(PUP::er& __p) {
        __p | pe;
        packClosure(__p);
      }
      virtual ~GetPage_3_closure() {
      }
      PUPable_decl_template(SINGLE_ARG(GetPage_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 

    struct Closure_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::PAReceivePage_4_closure : public SDAG::Closure {
            ENTRY_TYPE *page;
            int pe;
            MSA_Page_Fault_t pageState;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      PAReceivePage_4_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      PAReceivePage_4_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            ENTRY_TYPE *& getP0() { return page;}
            int & getP1() { return pe;}
            MSA_Page_Fault_t & getP2() { return pageState;}
      void pup(PUP::er& __p) {
        __p | pe;
        __p | pageState;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int impl_off_page, impl_cnt_page;
  implP|impl_off_page;
  implP|impl_cnt_page;
  PUP::detail::TemporaryObjectHolder<int> pe;
  implP|pe;
  PUP::detail::TemporaryObjectHolder<MSA_Page_Fault_t> pageState;
  implP|pageState;
          impl_buf+=CK_ALIGN(implP.size(),16);
          page = (ENTRY_TYPE *)(impl_buf+impl_off_page);
        }
      }
      virtual ~PAReceivePage_4_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl_template(SINGLE_ARG(PAReceivePage_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 

    struct Closure_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::PAReceiveRLEPage_5_closure : public SDAG::Closure {
            MSA_WriteSpan_t *spans;
            unsigned int nSpans;
            ENTRY_TYPE *entries;
            unsigned int nEntries;
            int pe;
            MSA_Page_Fault_t pageState;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      PAReceiveRLEPage_5_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      PAReceiveRLEPage_5_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            MSA_WriteSpan_t *& getP0() { return spans;}
            unsigned int & getP1() { return nSpans;}
            ENTRY_TYPE *& getP2() { return entries;}
            unsigned int & getP3() { return nEntries;}
            int & getP4() { return pe;}
            MSA_Page_Fault_t & getP5() { return pageState;}
      void pup(PUP::er& __p) {
        __p | nSpans;
        __p | nEntries;
        __p | pe;
        __p | pageState;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int impl_off_spans, impl_cnt_spans;
  implP|impl_off_spans;
  implP|impl_cnt_spans;
  PUP::detail::TemporaryObjectHolder<unsigned int> nSpans;
  implP|nSpans;
  int impl_off_entries, impl_cnt_entries;
  implP|impl_off_entries;
  implP|impl_cnt_entries;
  PUP::detail::TemporaryObjectHolder<unsigned int> nEntries;
  implP|nEntries;
  PUP::detail::TemporaryObjectHolder<int> pe;
  implP|pe;
  PUP::detail::TemporaryObjectHolder<MSA_Page_Fault_t> pageState;
  implP|pageState;
          impl_buf+=CK_ALIGN(implP.size(),16);
          spans = (MSA_WriteSpan_t *)(impl_buf+impl_off_spans);
          entries = (ENTRY_TYPE *)(impl_buf+impl_off_entries);
        }
      }
      virtual ~PAReceiveRLEPage_5_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl_template(SINGLE_ARG(PAReceiveRLEPage_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 

    struct Closure_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::PAReceiveRLEPageWithPup_6_closure : public SDAG::Closure {
            MSA_WriteSpan_t *spans;
            unsigned int nSpans;
            MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> entries;
            unsigned int nEntries;
            int pe;
            MSA_Page_Fault_t pageState;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      PAReceiveRLEPageWithPup_6_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      PAReceiveRLEPageWithPup_6_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            MSA_WriteSpan_t *& getP0() { return spans;}
            unsigned int & getP1() { return nSpans;}
            MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> & getP2() { return entries;}
            unsigned int & getP3() { return nEntries;}
            int & getP4() { return pe;}
            MSA_Page_Fault_t & getP5() { return pageState;}
      void pup(PUP::er& __p) {
        __p | nSpans;
        __p | entries;
        __p | nEntries;
        __p | pe;
        __p | pageState;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int impl_off_spans, impl_cnt_spans;
  implP|impl_off_spans;
  implP|impl_cnt_spans;
  PUP::detail::TemporaryObjectHolder<unsigned int> nSpans;
  implP|nSpans;
  PUP::detail::TemporaryObjectHolder<MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE>> entries;
  implP|entries;
  PUP::detail::TemporaryObjectHolder<unsigned int> nEntries;
  implP|nEntries;
  PUP::detail::TemporaryObjectHolder<int> pe;
  implP|pe;
  PUP::detail::TemporaryObjectHolder<MSA_Page_Fault_t> pageState;
  implP|pageState;
          impl_buf+=CK_ALIGN(implP.size(),16);
          spans = (MSA_WriteSpan_t *)(impl_buf+impl_off_spans);
        }
      }
      virtual ~PAReceiveRLEPageWithPup_6_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl_template(SINGLE_ARG(PAReceiveRLEPageWithPup_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 

    struct Closure_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::Sync_7_closure : public SDAG::Closure {
            bool clear;


      Sync_7_closure() {
        init();
      }
      Sync_7_closure(CkMigrateMessage*) {
        init();
      }
            bool & getP0() { return clear;}
      void pup(PUP::er& __p) {
        __p | clear;
        packClosure(__p);
      }
      virtual ~Sync_7_closure() {
      }
      PUPable_decl_template(SINGLE_ARG(Sync_7_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 

    struct Closure_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::emit_8_closure : public SDAG::Closure {
            int ID;
            int offset;


      emit_8_closure() {
        init();
      }
      emit_8_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return ID;}
            int & getP1() { return offset;}
      void pup(PUP::er& __p) {
        __p | ID;
        __p | offset;
        packClosure(__p);
      }
      virtual ~emit_8_closure() {
      }
      PUPable_decl_template(SINGLE_ARG(emit_8_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> group MSA_CacheGroup: IrrGroup{
MSA_CacheGroup(unsigned int nPages, const CkArrayID &pageArrayID, unsigned int max_bytes, unsigned int nEntries, unsigned int numberOfWorkerThreads);
void AckPage(unsigned int page);
void ReceivePage(unsigned int page, const ENTRY_TYPE *pageData, int size);
void ReceivePageWithPUP(unsigned int page, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &pageData, int size);
void enroll();
void enroll(unsigned int numberOfWorkerThreads);
void enrollAck(int originator);
void enrollDone();
void SyncAck(const bool &clear);
void SyncDone(CkReductionMsg* impl_msg);
threaded void FinishSync();
void emitBufferValue(int ID, unsigned int pageNum, unsigned int offset);
};
 */
#ifdef CK_TEMPLATES_ONLY
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE>  int CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifdef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifdef CK_TEMPLATES_ONLY
/* DEFS: MSA_CacheGroup(unsigned int nPages, const CkArrayID &pageArrayID, unsigned int max_bytes, unsigned int nEntries, unsigned int numberOfWorkerThreads);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void AckPage(unsigned int page);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxyElement_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::AckPage(unsigned int page, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: unsigned int page
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|page;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|page;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_AckPage_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_AckPage_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_AckPage_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void ReceivePage(unsigned int page, const ENTRY_TYPE *pageData, int size);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxyElement_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::ReceivePage(unsigned int page, const ENTRY_TYPE *pageData, int size, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: unsigned int page, const ENTRY_TYPE *pageData, int size
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_pageData, impl_cnt_pageData;
  impl_off_pageData=impl_off=CK_ALIGN(impl_off,sizeof(ENTRY_TYPE));
  impl_off+=(impl_cnt_pageData=sizeof(ENTRY_TYPE)*(size));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|page;
    implP|impl_off_pageData;
    implP|impl_cnt_pageData;
    implP|size;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|page;
    implP|impl_off_pageData;
    implP|impl_cnt_pageData;
    implP|size;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_pageData,pageData,impl_cnt_pageData);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_ReceivePage_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_ReceivePage_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_ReceivePage_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void ReceivePageWithPUP(unsigned int page, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &pageData, int size);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxyElement_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::ReceivePageWithPUP(unsigned int page, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &pageData, int size, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: unsigned int page, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &pageData, int size
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|page;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE>>::type>::type &)pageData;
    implP|size;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|page;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE>>::type>::type &)pageData;
    implP|size;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_ReceivePageWithPUP_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_ReceivePageWithPUP_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_ReceivePageWithPUP_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void enroll();
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxyElement_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::enroll(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_enroll_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_enroll_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_enroll_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void enroll(unsigned int numberOfWorkerThreads);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxyElement_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::enroll(unsigned int numberOfWorkerThreads, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: unsigned int numberOfWorkerThreads
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|numberOfWorkerThreads;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|numberOfWorkerThreads;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_enroll_marshall6(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_enroll_marshall6(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_enroll_marshall6(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void enrollAck(int originator);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxyElement_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::enrollAck(int originator, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int originator
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|originator;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|originator;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_enrollAck_marshall7(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_enrollAck_marshall7(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_enrollAck_marshall7(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void enrollDone();
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxyElement_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::enrollDone(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_enrollDone_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_enrollDone_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_enrollDone_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void SyncAck(const bool &clear);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxyElement_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::SyncAck(const bool &clear, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const bool &clear
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)clear;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)clear;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_SyncAck_marshall9(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_SyncAck_marshall9(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_SyncAck_marshall9(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void SyncDone(CkReductionMsg* impl_msg);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxyElement_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::SyncDone(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_SyncDone_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_SyncDone_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_SyncDone_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: threaded void FinishSync();
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxyElement_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::FinishSync(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_FinishSync_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_FinishSync_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_FinishSync_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void emitBufferValue(int ID, unsigned int pageNum, unsigned int offset);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxyElement_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::emitBufferValue(int ID, unsigned int pageNum, unsigned int offset, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int ID, unsigned int pageNum, unsigned int offset
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ID;
    implP|pageNum;
    implP|offset;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ID;
    implP|pageNum;
    implP|offset;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_emitBufferValue_marshall12(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_emitBufferValue_marshall12(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_emitBufferValue_marshall12(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: MSA_CacheGroup(unsigned int nPages, const CkArrayID &pageArrayID, unsigned int max_bytes, unsigned int nEntries, unsigned int numberOfWorkerThreads);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
CkGroupID CProxy_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::ckNew(unsigned int nPages, const CkArrayID &pageArrayID, unsigned int max_bytes, unsigned int nEntries, unsigned int numberOfWorkerThreads, const CkEntryOptions *impl_e_opts)
{
  //Marshall: unsigned int nPages, const CkArrayID &pageArrayID, unsigned int max_bytes, unsigned int nEntries, unsigned int numberOfWorkerThreads
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|nPages;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)pageArrayID;
    implP|max_bytes;
    implP|nEntries;
    implP|numberOfWorkerThreads;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|nPages;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)pageArrayID;
    implP|max_bytes;
    implP|nEntries;
    implP|numberOfWorkerThreads;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::__idx, CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_MSA_CacheGroup_marshall1(), impl_msg);
  return gId;
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
  CProxy_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::CProxy_MSA_CacheGroup(unsigned int nPages, const CkArrayID &pageArrayID, unsigned int max_bytes, unsigned int nEntries, unsigned int numberOfWorkerThreads, const CkEntryOptions *impl_e_opts)
{
  //Marshall: unsigned int nPages, const CkArrayID &pageArrayID, unsigned int max_bytes, unsigned int nEntries, unsigned int numberOfWorkerThreads
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|nPages;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)pageArrayID;
    implP|max_bytes;
    implP|nEntries;
    implP|numberOfWorkerThreads;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|nPages;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)pageArrayID;
    implP|max_bytes;
    implP|nEntries;
    implP|numberOfWorkerThreads;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  ckSetGroupID(CkCreateGroup(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::__idx, CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_MSA_CacheGroup_marshall1(), impl_msg));
}

// Entry point registration function
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
int CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::reg_MSA_CacheGroup_marshall1() {
  int epidx = CkRegisterEp("MSA_CacheGroup(unsigned int nPages, const CkArrayID &pageArrayID, unsigned int max_bytes, unsigned int nEntries, unsigned int numberOfWorkerThreads)",
      reinterpret_cast<CkCallFnPtr>(_call_MSA_CacheGroup_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_MSA_CacheGroup_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_MSA_CacheGroup_marshall1);

  return epidx;
}

template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_call_MSA_CacheGroup_marshall1(void* impl_msg, void* impl_obj_void)
{
  MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> * impl_obj = static_cast<MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: unsigned int nPages, const CkArrayID &pageArrayID, unsigned int max_bytes, unsigned int nEntries, unsigned int numberOfWorkerThreads*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<unsigned int> nPages;
  implP|nPages;
  PUP::detail::TemporaryObjectHolder<CkArrayID> pageArrayID;
  implP|pageArrayID;
  PUP::detail::TemporaryObjectHolder<unsigned int> max_bytes;
  implP|max_bytes;
  PUP::detail::TemporaryObjectHolder<unsigned int> nEntries;
  implP|nEntries;
  PUP::detail::TemporaryObjectHolder<unsigned int> numberOfWorkerThreads;
  implP|numberOfWorkerThreads;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> (std::move(nPages.t), std::move(pageArrayID.t), std::move(max_bytes.t), std::move(nEntries.t), std::move(numberOfWorkerThreads.t));
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
int CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_callmarshall_MSA_CacheGroup_marshall1(char* impl_buf, void* impl_obj_void) {
  MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> * impl_obj = static_cast<MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> *>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: unsigned int nPages, const CkArrayID &pageArrayID, unsigned int max_bytes, unsigned int nEntries, unsigned int numberOfWorkerThreads*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<unsigned int> nPages;
  implP|nPages;
  PUP::detail::TemporaryObjectHolder<CkArrayID> pageArrayID;
  implP|pageArrayID;
  PUP::detail::TemporaryObjectHolder<unsigned int> max_bytes;
  implP|max_bytes;
  PUP::detail::TemporaryObjectHolder<unsigned int> nEntries;
  implP|nEntries;
  PUP::detail::TemporaryObjectHolder<unsigned int> numberOfWorkerThreads;
  implP|numberOfWorkerThreads;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> (std::move(nPages.t), std::move(pageArrayID.t), std::move(max_bytes.t), std::move(nEntries.t), std::move(numberOfWorkerThreads.t));
  return implP.size();
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_marshallmessagepup_MSA_CacheGroup_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: unsigned int nPages, const CkArrayID &pageArrayID, unsigned int max_bytes, unsigned int nEntries, unsigned int numberOfWorkerThreads*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<unsigned int> nPages;
  implP|nPages;
  PUP::detail::TemporaryObjectHolder<CkArrayID> pageArrayID;
  implP|pageArrayID;
  PUP::detail::TemporaryObjectHolder<unsigned int> max_bytes;
  implP|max_bytes;
  PUP::detail::TemporaryObjectHolder<unsigned int> nEntries;
  implP|nEntries;
  PUP::detail::TemporaryObjectHolder<unsigned int> numberOfWorkerThreads;
  implP|numberOfWorkerThreads;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("nPages");
  implDestP|nPages;
  if (implDestP.hasComments()) implDestP.comment("pageArrayID");
  implDestP|pageArrayID;
  if (implDestP.hasComments()) implDestP.comment("max_bytes");
  implDestP|max_bytes;
  if (implDestP.hasComments()) implDestP.comment("nEntries");
  implDestP|nEntries;
  if (implDestP.hasComments()) implDestP.comment("numberOfWorkerThreads");
  implDestP|numberOfWorkerThreads;
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void AckPage(unsigned int page);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::AckPage(unsigned int page, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: unsigned int page
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|page;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|page;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_AckPage_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_AckPage_marshall2(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_AckPage_marshall2(), impl_msg, ckGetGroupID(),0);
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::AckPage(unsigned int page, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: unsigned int page
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|page;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|page;
  }
  CkSendMsgBranchMulti(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_AckPage_marshall2(), impl_msg, ckGetGroupID(), npes, pes,0);
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::AckPage(unsigned int page, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: unsigned int page
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|page;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|page;
  }
  CkSendMsgBranchGroup(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_AckPage_marshall2(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
int CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::reg_AckPage_marshall2() {
  int epidx = CkRegisterEp("AckPage(unsigned int page)",
      reinterpret_cast<CkCallFnPtr>(_call_AckPage_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_AckPage_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_AckPage_marshall2);

  return epidx;
}

template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_call_AckPage_marshall2(void* impl_msg, void* impl_obj_void)
{
  MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> * impl_obj = static_cast<MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: unsigned int page*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<unsigned int> page;
  implP|page;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->AckPage(std::move(page.t));
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
int CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_callmarshall_AckPage_marshall2(char* impl_buf, void* impl_obj_void) {
  MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> * impl_obj = static_cast<MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> *>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: unsigned int page*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<unsigned int> page;
  implP|page;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->AckPage(std::move(page.t));
  return implP.size();
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_marshallmessagepup_AckPage_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: unsigned int page*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<unsigned int> page;
  implP|page;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("page");
  implDestP|page;
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> PUPable_def_template_nonInst(SINGLE_ARG(Closure_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::AckPage_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void ReceivePage(unsigned int page, const ENTRY_TYPE *pageData, int size);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::ReceivePage(unsigned int page, const ENTRY_TYPE *pageData, int size, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: unsigned int page, const ENTRY_TYPE *pageData, int size
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_pageData, impl_cnt_pageData;
  impl_off_pageData=impl_off=CK_ALIGN(impl_off,sizeof(ENTRY_TYPE));
  impl_off+=(impl_cnt_pageData=sizeof(ENTRY_TYPE)*(size));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|page;
    implP|impl_off_pageData;
    implP|impl_cnt_pageData;
    implP|size;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|page;
    implP|impl_off_pageData;
    implP|impl_cnt_pageData;
    implP|size;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_pageData,pageData,impl_cnt_pageData);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_ReceivePage_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_ReceivePage_marshall3(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_ReceivePage_marshall3(), impl_msg, ckGetGroupID(),0);
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::ReceivePage(unsigned int page, const ENTRY_TYPE *pageData, int size, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: unsigned int page, const ENTRY_TYPE *pageData, int size
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_pageData, impl_cnt_pageData;
  impl_off_pageData=impl_off=CK_ALIGN(impl_off,sizeof(ENTRY_TYPE));
  impl_off+=(impl_cnt_pageData=sizeof(ENTRY_TYPE)*(size));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|page;
    implP|impl_off_pageData;
    implP|impl_cnt_pageData;
    implP|size;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|page;
    implP|impl_off_pageData;
    implP|impl_cnt_pageData;
    implP|size;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_pageData,pageData,impl_cnt_pageData);
  CkSendMsgBranchMulti(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_ReceivePage_marshall3(), impl_msg, ckGetGroupID(), npes, pes,0);
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::ReceivePage(unsigned int page, const ENTRY_TYPE *pageData, int size, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: unsigned int page, const ENTRY_TYPE *pageData, int size
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_pageData, impl_cnt_pageData;
  impl_off_pageData=impl_off=CK_ALIGN(impl_off,sizeof(ENTRY_TYPE));
  impl_off+=(impl_cnt_pageData=sizeof(ENTRY_TYPE)*(size));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|page;
    implP|impl_off_pageData;
    implP|impl_cnt_pageData;
    implP|size;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|page;
    implP|impl_off_pageData;
    implP|impl_cnt_pageData;
    implP|size;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_pageData,pageData,impl_cnt_pageData);
  CkSendMsgBranchGroup(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_ReceivePage_marshall3(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
int CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::reg_ReceivePage_marshall3() {
  int epidx = CkRegisterEp("ReceivePage(unsigned int page, const ENTRY_TYPE *pageData, int size)",
      reinterpret_cast<CkCallFnPtr>(_call_ReceivePage_marshall3), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_ReceivePage_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_ReceivePage_marshall3);

  return epidx;
}

template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_call_ReceivePage_marshall3(void* impl_msg, void* impl_obj_void)
{
  MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> * impl_obj = static_cast<MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: unsigned int page, const ENTRY_TYPE *pageData, int size*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<unsigned int> page;
  implP|page;
  int impl_off_pageData, impl_cnt_pageData;
  implP|impl_off_pageData;
  implP|impl_cnt_pageData;
  PUP::detail::TemporaryObjectHolder<int> size;
  implP|size;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  ENTRY_TYPE *pageData=(ENTRY_TYPE *)(impl_buf+impl_off_pageData);
  impl_obj->ReceivePage(std::move(page.t), pageData, std::move(size.t));
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
int CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_callmarshall_ReceivePage_marshall3(char* impl_buf, void* impl_obj_void) {
  MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> * impl_obj = static_cast<MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> *>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: unsigned int page, const ENTRY_TYPE *pageData, int size*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<unsigned int> page;
  implP|page;
  int impl_off_pageData, impl_cnt_pageData;
  implP|impl_off_pageData;
  implP|impl_cnt_pageData;
  PUP::detail::TemporaryObjectHolder<int> size;
  implP|size;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  ENTRY_TYPE *pageData=(ENTRY_TYPE *)(impl_buf+impl_off_pageData);
  impl_obj->ReceivePage(std::move(page.t), pageData, std::move(size.t));
  return implP.size();
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_marshallmessagepup_ReceivePage_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: unsigned int page, const ENTRY_TYPE *pageData, int size*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<unsigned int> page;
  implP|page;
  int impl_off_pageData, impl_cnt_pageData;
  implP|impl_off_pageData;
  implP|impl_cnt_pageData;
  PUP::detail::TemporaryObjectHolder<int> size;
  implP|size;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  ENTRY_TYPE *pageData=(ENTRY_TYPE *)(impl_buf+impl_off_pageData);
  if (implDestP.hasComments()) implDestP.comment("page");
  implDestP|page;
  if (implDestP.hasComments()) implDestP.comment("pageData");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*pageData))<impl_cnt_pageData;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|pageData[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("size");
  implDestP|size;
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> PUPable_def_template_nonInst(SINGLE_ARG(Closure_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::ReceivePage_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void ReceivePageWithPUP(unsigned int page, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &pageData, int size);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::ReceivePageWithPUP(unsigned int page, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &pageData, int size, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: unsigned int page, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &pageData, int size
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|page;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE>>::type>::type &)pageData;
    implP|size;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|page;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE>>::type>::type &)pageData;
    implP|size;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_ReceivePageWithPUP_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_ReceivePageWithPUP_marshall4(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_ReceivePageWithPUP_marshall4(), impl_msg, ckGetGroupID(),0);
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::ReceivePageWithPUP(unsigned int page, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &pageData, int size, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: unsigned int page, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &pageData, int size
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|page;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE>>::type>::type &)pageData;
    implP|size;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|page;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE>>::type>::type &)pageData;
    implP|size;
  }
  CkSendMsgBranchMulti(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_ReceivePageWithPUP_marshall4(), impl_msg, ckGetGroupID(), npes, pes,0);
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::ReceivePageWithPUP(unsigned int page, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &pageData, int size, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: unsigned int page, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &pageData, int size
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|page;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE>>::type>::type &)pageData;
    implP|size;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|page;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE>>::type>::type &)pageData;
    implP|size;
  }
  CkSendMsgBranchGroup(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_ReceivePageWithPUP_marshall4(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
int CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::reg_ReceivePageWithPUP_marshall4() {
  int epidx = CkRegisterEp("ReceivePageWithPUP(unsigned int page, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &pageData, int size)",
      reinterpret_cast<CkCallFnPtr>(_call_ReceivePageWithPUP_marshall4), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_ReceivePageWithPUP_marshall4);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_ReceivePageWithPUP_marshall4);

  return epidx;
}

template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_call_ReceivePageWithPUP_marshall4(void* impl_msg, void* impl_obj_void)
{
  MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> * impl_obj = static_cast<MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: unsigned int page, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &pageData, int size*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<unsigned int> page;
  implP|page;
  PUP::detail::TemporaryObjectHolder<MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE>> pageData;
  implP|pageData;
  PUP::detail::TemporaryObjectHolder<int> size;
  implP|size;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->ReceivePageWithPUP(std::move(page.t), std::move(pageData.t), std::move(size.t));
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
int CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_callmarshall_ReceivePageWithPUP_marshall4(char* impl_buf, void* impl_obj_void) {
  MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> * impl_obj = static_cast<MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> *>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: unsigned int page, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &pageData, int size*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<unsigned int> page;
  implP|page;
  PUP::detail::TemporaryObjectHolder<MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE>> pageData;
  implP|pageData;
  PUP::detail::TemporaryObjectHolder<int> size;
  implP|size;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->ReceivePageWithPUP(std::move(page.t), std::move(pageData.t), std::move(size.t));
  return implP.size();
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_marshallmessagepup_ReceivePageWithPUP_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: unsigned int page, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &pageData, int size*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<unsigned int> page;
  implP|page;
  PUP::detail::TemporaryObjectHolder<MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE>> pageData;
  implP|pageData;
  PUP::detail::TemporaryObjectHolder<int> size;
  implP|size;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("page");
  implDestP|page;
  if (implDestP.hasComments()) implDestP.comment("pageData");
  implDestP|pageData;
  if (implDestP.hasComments()) implDestP.comment("size");
  implDestP|size;
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> PUPable_def_template_nonInst(SINGLE_ARG(Closure_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::ReceivePageWithPUP_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void enroll();
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::enroll(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_enroll_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_enroll_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_enroll_void(), impl_msg, ckGetGroupID(),0);
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::enroll(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_enroll_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::enroll(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_enroll_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
int CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::reg_enroll_void() {
  int epidx = CkRegisterEp("enroll()",
      reinterpret_cast<CkCallFnPtr>(_call_enroll_void), 0, __idx, 0);
  return epidx;
}

template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_call_enroll_void(void* impl_msg, void* impl_obj_void)
{
  MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> * impl_obj = static_cast<MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> *>(impl_obj_void);
  impl_obj->enroll();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> PUPable_def_template_nonInst(SINGLE_ARG(Closure_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::enroll_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void enroll(unsigned int numberOfWorkerThreads);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::enroll(unsigned int numberOfWorkerThreads, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: unsigned int numberOfWorkerThreads
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|numberOfWorkerThreads;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|numberOfWorkerThreads;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_enroll_marshall6(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_enroll_marshall6(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_enroll_marshall6(), impl_msg, ckGetGroupID(),0);
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::enroll(unsigned int numberOfWorkerThreads, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: unsigned int numberOfWorkerThreads
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|numberOfWorkerThreads;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|numberOfWorkerThreads;
  }
  CkSendMsgBranchMulti(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_enroll_marshall6(), impl_msg, ckGetGroupID(), npes, pes,0);
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::enroll(unsigned int numberOfWorkerThreads, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: unsigned int numberOfWorkerThreads
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|numberOfWorkerThreads;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|numberOfWorkerThreads;
  }
  CkSendMsgBranchGroup(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_enroll_marshall6(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
int CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::reg_enroll_marshall6() {
  int epidx = CkRegisterEp("enroll(unsigned int numberOfWorkerThreads)",
      reinterpret_cast<CkCallFnPtr>(_call_enroll_marshall6), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_enroll_marshall6);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_enroll_marshall6);

  return epidx;
}

template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_call_enroll_marshall6(void* impl_msg, void* impl_obj_void)
{
  MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> * impl_obj = static_cast<MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: unsigned int numberOfWorkerThreads*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<unsigned int> numberOfWorkerThreads;
  implP|numberOfWorkerThreads;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->enroll(std::move(numberOfWorkerThreads.t));
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
int CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_callmarshall_enroll_marshall6(char* impl_buf, void* impl_obj_void) {
  MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> * impl_obj = static_cast<MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> *>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: unsigned int numberOfWorkerThreads*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<unsigned int> numberOfWorkerThreads;
  implP|numberOfWorkerThreads;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->enroll(std::move(numberOfWorkerThreads.t));
  return implP.size();
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_marshallmessagepup_enroll_marshall6(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: unsigned int numberOfWorkerThreads*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<unsigned int> numberOfWorkerThreads;
  implP|numberOfWorkerThreads;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("numberOfWorkerThreads");
  implDestP|numberOfWorkerThreads;
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> PUPable_def_template_nonInst(SINGLE_ARG(Closure_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::enroll_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void enrollAck(int originator);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::enrollAck(int originator, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int originator
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|originator;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|originator;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_enrollAck_marshall7(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_enrollAck_marshall7(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_enrollAck_marshall7(), impl_msg, ckGetGroupID(),0);
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::enrollAck(int originator, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int originator
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|originator;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|originator;
  }
  CkSendMsgBranchMulti(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_enrollAck_marshall7(), impl_msg, ckGetGroupID(), npes, pes,0);
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::enrollAck(int originator, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int originator
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|originator;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|originator;
  }
  CkSendMsgBranchGroup(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_enrollAck_marshall7(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
int CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::reg_enrollAck_marshall7() {
  int epidx = CkRegisterEp("enrollAck(int originator)",
      reinterpret_cast<CkCallFnPtr>(_call_enrollAck_marshall7), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_enrollAck_marshall7);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_enrollAck_marshall7);

  return epidx;
}

template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_call_enrollAck_marshall7(void* impl_msg, void* impl_obj_void)
{
  MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> * impl_obj = static_cast<MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int originator*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> originator;
  implP|originator;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->enrollAck(std::move(originator.t));
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
int CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_callmarshall_enrollAck_marshall7(char* impl_buf, void* impl_obj_void) {
  MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> * impl_obj = static_cast<MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> *>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int originator*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> originator;
  implP|originator;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->enrollAck(std::move(originator.t));
  return implP.size();
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_marshallmessagepup_enrollAck_marshall7(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int originator*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> originator;
  implP|originator;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("originator");
  implDestP|originator;
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> PUPable_def_template_nonInst(SINGLE_ARG(Closure_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::enrollAck_7_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void enrollDone();
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::enrollDone(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_enrollDone_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_enrollDone_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_enrollDone_void(), impl_msg, ckGetGroupID(),0);
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::enrollDone(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_enrollDone_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::enrollDone(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_enrollDone_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
int CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::reg_enrollDone_void() {
  int epidx = CkRegisterEp("enrollDone()",
      reinterpret_cast<CkCallFnPtr>(_call_enrollDone_void), 0, __idx, 0);
  return epidx;
}

template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_call_enrollDone_void(void* impl_msg, void* impl_obj_void)
{
  MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> * impl_obj = static_cast<MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> *>(impl_obj_void);
  impl_obj->enrollDone();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> PUPable_def_template_nonInst(SINGLE_ARG(Closure_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::enrollDone_8_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void SyncAck(const bool &clear);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::SyncAck(const bool &clear, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const bool &clear
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)clear;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)clear;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_SyncAck_marshall9(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_SyncAck_marshall9(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_SyncAck_marshall9(), impl_msg, ckGetGroupID(),0);
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::SyncAck(const bool &clear, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const bool &clear
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)clear;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)clear;
  }
  CkSendMsgBranchMulti(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_SyncAck_marshall9(), impl_msg, ckGetGroupID(), npes, pes,0);
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::SyncAck(const bool &clear, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const bool &clear
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)clear;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)clear;
  }
  CkSendMsgBranchGroup(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_SyncAck_marshall9(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
int CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::reg_SyncAck_marshall9() {
  int epidx = CkRegisterEp("SyncAck(const bool &clear)",
      reinterpret_cast<CkCallFnPtr>(_call_SyncAck_marshall9), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_SyncAck_marshall9);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_SyncAck_marshall9);

  return epidx;
}

template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_call_SyncAck_marshall9(void* impl_msg, void* impl_obj_void)
{
  MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> * impl_obj = static_cast<MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const bool &clear*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<bool> clear;
  implP|clear;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->SyncAck(std::move(clear.t));
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
int CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_callmarshall_SyncAck_marshall9(char* impl_buf, void* impl_obj_void) {
  MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> * impl_obj = static_cast<MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> *>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const bool &clear*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<bool> clear;
  implP|clear;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->SyncAck(std::move(clear.t));
  return implP.size();
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_marshallmessagepup_SyncAck_marshall9(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const bool &clear*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<bool> clear;
  implP|clear;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("clear");
  implDestP|clear;
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> PUPable_def_template_nonInst(SINGLE_ARG(Closure_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::SyncAck_9_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void SyncDone(CkReductionMsg* impl_msg);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::SyncDone(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_SyncDone_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_SyncDone_CkReductionMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_SyncDone_CkReductionMsg(), impl_msg, ckGetGroupID(),0);
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::SyncDone(CkReductionMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_SyncDone_CkReductionMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::SyncDone(CkReductionMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_SyncDone_CkReductionMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
int CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::reg_SyncDone_CkReductionMsg() {
  int epidx = CkRegisterEp("SyncDone(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_SyncDone_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}

template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_call_SyncDone_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> * impl_obj = static_cast<MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> *>(impl_obj_void);
  impl_obj->SyncDone((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: threaded void FinishSync();
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::FinishSync(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_FinishSync_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_FinishSync_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_FinishSync_void(), impl_msg, ckGetGroupID(),0);
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::FinishSync(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_FinishSync_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::FinishSync(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_FinishSync_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
int CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::reg_FinishSync_void() {
  int epidx = CkRegisterEp("FinishSync()",
      reinterpret_cast<CkCallFnPtr>(_call_FinishSync_void), 0, __idx, 0);
  return epidx;
}

template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_call_FinishSync_void(void* impl_msg, void* impl_obj_void)
{
  MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> * impl_obj = static_cast<MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> *>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_FinishSync_void, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthTraceResume(tid);
  CthResume(tid);
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_callthr_FinishSync_void(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  void *impl_obj_void = impl_arg->obj;
  MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  *impl_obj = static_cast<MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  *>(impl_obj_void);
  delete impl_arg;
  impl_obj->FinishSync();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> PUPable_def_template_nonInst(SINGLE_ARG(Closure_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::FinishSync_11_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void emitBufferValue(int ID, unsigned int pageNum, unsigned int offset);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::emitBufferValue(int ID, unsigned int pageNum, unsigned int offset, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int ID, unsigned int pageNum, unsigned int offset
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ID;
    implP|pageNum;
    implP|offset;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ID;
    implP|pageNum;
    implP|offset;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_emitBufferValue_marshall12(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_emitBufferValue_marshall12(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_emitBufferValue_marshall12(), impl_msg, ckGetGroupID(),0);
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::emitBufferValue(int ID, unsigned int pageNum, unsigned int offset, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int ID, unsigned int pageNum, unsigned int offset
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ID;
    implP|pageNum;
    implP|offset;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ID;
    implP|pageNum;
    implP|offset;
  }
  CkSendMsgBranchMulti(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_emitBufferValue_marshall12(), impl_msg, ckGetGroupID(), npes, pes,0);
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::emitBufferValue(int ID, unsigned int pageNum, unsigned int offset, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int ID, unsigned int pageNum, unsigned int offset
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ID;
    implP|pageNum;
    implP|offset;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ID;
    implP|pageNum;
    implP|offset;
  }
  CkSendMsgBranchGroup(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_emitBufferValue_marshall12(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
int CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::reg_emitBufferValue_marshall12() {
  int epidx = CkRegisterEp("emitBufferValue(int ID, unsigned int pageNum, unsigned int offset)",
      reinterpret_cast<CkCallFnPtr>(_call_emitBufferValue_marshall12), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_emitBufferValue_marshall12);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_emitBufferValue_marshall12);

  return epidx;
}

template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_call_emitBufferValue_marshall12(void* impl_msg, void* impl_obj_void)
{
  MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> * impl_obj = static_cast<MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int ID, unsigned int pageNum, unsigned int offset*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> ID;
  implP|ID;
  PUP::detail::TemporaryObjectHolder<unsigned int> pageNum;
  implP|pageNum;
  PUP::detail::TemporaryObjectHolder<unsigned int> offset;
  implP|offset;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->emitBufferValue(std::move(ID.t), std::move(pageNum.t), std::move(offset.t));
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
int CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_callmarshall_emitBufferValue_marshall12(char* impl_buf, void* impl_obj_void) {
  MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> * impl_obj = static_cast<MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> *>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int ID, unsigned int pageNum, unsigned int offset*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> ID;
  implP|ID;
  PUP::detail::TemporaryObjectHolder<unsigned int> pageNum;
  implP|pageNum;
  PUP::detail::TemporaryObjectHolder<unsigned int> offset;
  implP|offset;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->emitBufferValue(std::move(ID.t), std::move(pageNum.t), std::move(offset.t));
  return implP.size();
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_marshallmessagepup_emitBufferValue_marshall12(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int ID, unsigned int pageNum, unsigned int offset*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> ID;
  implP|ID;
  PUP::detail::TemporaryObjectHolder<unsigned int> pageNum;
  implP|pageNum;
  PUP::detail::TemporaryObjectHolder<unsigned int> offset;
  implP|offset;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("ID");
  implDestP|ID;
  if (implDestP.hasComments()) implDestP.comment("pageNum");
  implDestP|pageNum;
  if (implDestP.hasComments()) implDestP.comment("offset");
  implDestP|offset;
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> PUPable_def_template_nonInst(SINGLE_ARG(Closure_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::emitBufferValue_12_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: MSA_CacheGroup(unsigned int nPages, const CkArrayID &pageArrayID, unsigned int max_bytes, unsigned int nEntries, unsigned int numberOfWorkerThreads);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void AckPage(unsigned int page);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxySection_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::AckPage(unsigned int page, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: unsigned int page
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|page;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|page;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_AckPage_marshall2(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_AckPage_marshall2(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void ReceivePage(unsigned int page, const ENTRY_TYPE *pageData, int size);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxySection_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::ReceivePage(unsigned int page, const ENTRY_TYPE *pageData, int size, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: unsigned int page, const ENTRY_TYPE *pageData, int size
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_pageData, impl_cnt_pageData;
  impl_off_pageData=impl_off=CK_ALIGN(impl_off,sizeof(ENTRY_TYPE));
  impl_off+=(impl_cnt_pageData=sizeof(ENTRY_TYPE)*(size));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|page;
    implP|impl_off_pageData;
    implP|impl_cnt_pageData;
    implP|size;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|page;
    implP|impl_off_pageData;
    implP|impl_cnt_pageData;
    implP|size;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_pageData,pageData,impl_cnt_pageData);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_ReceivePage_marshall3(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_ReceivePage_marshall3(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void ReceivePageWithPUP(unsigned int page, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &pageData, int size);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxySection_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::ReceivePageWithPUP(unsigned int page, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &pageData, int size, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: unsigned int page, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &pageData, int size
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|page;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE>>::type>::type &)pageData;
    implP|size;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|page;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE>>::type>::type &)pageData;
    implP|size;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_ReceivePageWithPUP_marshall4(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_ReceivePageWithPUP_marshall4(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void enroll();
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxySection_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::enroll(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_enroll_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_enroll_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void enroll(unsigned int numberOfWorkerThreads);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxySection_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::enroll(unsigned int numberOfWorkerThreads, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: unsigned int numberOfWorkerThreads
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|numberOfWorkerThreads;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|numberOfWorkerThreads;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_enroll_marshall6(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_enroll_marshall6(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void enrollAck(int originator);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxySection_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::enrollAck(int originator, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int originator
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|originator;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|originator;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_enrollAck_marshall7(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_enrollAck_marshall7(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void enrollDone();
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxySection_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::enrollDone(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_enrollDone_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_enrollDone_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void SyncAck(const bool &clear);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxySection_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::SyncAck(const bool &clear, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const bool &clear
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)clear;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)clear;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_SyncAck_marshall9(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_SyncAck_marshall9(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void SyncDone(CkReductionMsg* impl_msg);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxySection_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::SyncDone(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_SyncDone_CkReductionMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_SyncDone_CkReductionMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: threaded void FinishSync();
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxySection_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::FinishSync(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_FinishSync_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_FinishSync_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void emitBufferValue(int ID, unsigned int pageNum, unsigned int offset);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxySection_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::emitBufferValue(int ID, unsigned int pageNum, unsigned int offset, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int ID, unsigned int pageNum, unsigned int offset
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ID;
    implP|pageNum;
    implP|offset;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ID;
    implP|pageNum;
    implP|offset;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_emitBufferValue_marshall12(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_emitBufferValue_marshall12(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifdef CK_TEMPLATES_ONLY
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> void CkIndex_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::isIrreducible());
  // REG: MSA_CacheGroup(unsigned int nPages, const CkArrayID &pageArrayID, unsigned int max_bytes, unsigned int nEntries, unsigned int numberOfWorkerThreads);
  idx_MSA_CacheGroup_marshall1();

  // REG: void AckPage(unsigned int page);
  idx_AckPage_marshall2();

  // REG: void ReceivePage(unsigned int page, const ENTRY_TYPE *pageData, int size);
  idx_ReceivePage_marshall3();

  // REG: void ReceivePageWithPUP(unsigned int page, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &pageData, int size);
  idx_ReceivePageWithPUP_marshall4();

  // REG: void enroll();
  idx_enroll_void();

  // REG: void enroll(unsigned int numberOfWorkerThreads);
  idx_enroll_marshall6();

  // REG: void enrollAck(int originator);
  idx_enrollAck_marshall7();

  // REG: void enrollDone();
  idx_enrollDone_void();

  // REG: void SyncAck(const bool &clear);
  idx_SyncAck_marshall9();

  // REG: void SyncDone(CkReductionMsg* impl_msg);
  idx_SyncDone_CkReductionMsg();

  // REG: threaded void FinishSync();
  idx_FinishSync_void();

  // REG: void emitBufferValue(int ID, unsigned int pageNum, unsigned int offset);
  idx_emitBufferValue_marshall12();

}
#endif /* CK_TEMPLATES_ONLY */
#ifdef CK_TEMPLATES_ONLY
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
struct CBase_MSA_CacheGroup : public Group, virtual CBase
 {
  CProxy_MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  thisProxy;
  CBase_MSA_CacheGroup() : thisProxy(this)
    , Group()
  { }
  CBase_MSA_CacheGroup(CkMigrateMessage* m) : thisProxy(this)
    , Group(m)  { }
  template <typename... Args>
  CBase_MSA_CacheGroup(Args... args) : thisProxy(this)
    , Group(args...)  { }
  void pup(PUP::er &p) { }
  void _sdag_pup(PUP::er &p) { }
  void virtual_pup(PUP::er &p) {
    recursive_pup<MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> >(dynamic_cast<MSA_CacheGroup <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> *>(this), p);
}
  void parent_pup(PUP::er &p) {
    recursive_pup<Group>(this, p);
    p|thisProxy;
  }
};
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> array MSA_PageArray: ArrayElement{
MSA_PageArray();
void setCacheProxy(const CProxy_MSA_CacheGroup<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &cache);
void GetPage(int pe);
void PAReceivePage(const ENTRY_TYPE *page, int pe, const MSA_Page_Fault_t &pageState);
void PAReceiveRLEPage(const MSA_WriteSpan_t *spans, unsigned int nSpans, const ENTRY_TYPE *entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState);
void PAReceiveRLEPageWithPup(const MSA_WriteSpan_t *spans, unsigned int nSpans, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState);
void Sync(const bool &clear);
void emit(int ID, int offset);
MSA_PageArray(CkMigrateMessage* impl_msg);
};
 */
#ifdef CK_TEMPLATES_ONLY
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE>  int CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifdef CK_TEMPLATES_ONLY
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxySection_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxySection_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
template <typename T>
void CProxySection_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxySection_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxySection_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
template <typename T>
void CProxySection_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifdef CK_TEMPLATES_ONLY
/* DEFS: MSA_PageArray();
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxyElement_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::insert(int onPE, const CkEntryOptions *impl_e_opts)
{ 
   void *impl_msg = CkAllocSysMsg(impl_e_opts);
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_MSA_PageArray_void(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void setCacheProxy(const CProxy_MSA_CacheGroup<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &cache);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxyElement_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::setCacheProxy(const CProxy_MSA_CacheGroup<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &cache, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CProxy_MSA_CacheGroup<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &cache
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_MSA_CacheGroup<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE>>::type>::type &)cache;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_MSA_CacheGroup<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE>>::type>::type &)cache;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_setCacheProxy_marshall2(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void GetPage(int pe);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxyElement_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::GetPage(int pe, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int pe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|pe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|pe;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_GetPage_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void PAReceivePage(const ENTRY_TYPE *page, int pe, const MSA_Page_Fault_t &pageState);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxyElement_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::PAReceivePage(const ENTRY_TYPE *page, int pe, const MSA_Page_Fault_t &pageState, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const ENTRY_TYPE *page, int pe, const MSA_Page_Fault_t &pageState
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_page, impl_cnt_page;
  impl_off_page=impl_off=CK_ALIGN(impl_off,sizeof(ENTRY_TYPE));
  impl_off+=(impl_cnt_page=sizeof(ENTRY_TYPE)*(ENTRIES_PER_PAGE));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_page;
    implP|impl_cnt_page;
    implP|pe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MSA_Page_Fault_t>::type>::type &)pageState;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_page;
    implP|impl_cnt_page;
    implP|pe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MSA_Page_Fault_t>::type>::type &)pageState;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_page,page,impl_cnt_page);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_PAReceivePage_marshall4(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void PAReceiveRLEPage(const MSA_WriteSpan_t *spans, unsigned int nSpans, const ENTRY_TYPE *entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxyElement_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::PAReceiveRLEPage(const MSA_WriteSpan_t *spans, unsigned int nSpans, const ENTRY_TYPE *entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const MSA_WriteSpan_t *spans, unsigned int nSpans, const ENTRY_TYPE *entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_spans, impl_cnt_spans;
  impl_off_spans=impl_off=CK_ALIGN(impl_off,sizeof(MSA_WriteSpan_t));
  impl_off+=(impl_cnt_spans=sizeof(MSA_WriteSpan_t)*(nSpans));
  int impl_off_entries, impl_cnt_entries;
  impl_off_entries=impl_off=CK_ALIGN(impl_off,sizeof(ENTRY_TYPE));
  impl_off+=(impl_cnt_entries=sizeof(ENTRY_TYPE)*(nEntries));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_spans;
    implP|impl_cnt_spans;
    implP|nSpans;
    implP|impl_off_entries;
    implP|impl_cnt_entries;
    implP|nEntries;
    implP|pe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MSA_Page_Fault_t>::type>::type &)pageState;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_spans;
    implP|impl_cnt_spans;
    implP|nSpans;
    implP|impl_off_entries;
    implP|impl_cnt_entries;
    implP|nEntries;
    implP|pe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MSA_Page_Fault_t>::type>::type &)pageState;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_spans,spans,impl_cnt_spans);
  memcpy(impl_buf+impl_off_entries,entries,impl_cnt_entries);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_PAReceiveRLEPage_marshall5(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void PAReceiveRLEPageWithPup(const MSA_WriteSpan_t *spans, unsigned int nSpans, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxyElement_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::PAReceiveRLEPageWithPup(const MSA_WriteSpan_t *spans, unsigned int nSpans, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const MSA_WriteSpan_t *spans, unsigned int nSpans, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_spans, impl_cnt_spans;
  impl_off_spans=impl_off=CK_ALIGN(impl_off,sizeof(MSA_WriteSpan_t));
  impl_off+=(impl_cnt_spans=sizeof(MSA_WriteSpan_t)*(nSpans));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_spans;
    implP|impl_cnt_spans;
    implP|nSpans;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE>>::type>::type &)entries;
    implP|nEntries;
    implP|pe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MSA_Page_Fault_t>::type>::type &)pageState;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_spans;
    implP|impl_cnt_spans;
    implP|nSpans;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE>>::type>::type &)entries;
    implP|nEntries;
    implP|pe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MSA_Page_Fault_t>::type>::type &)pageState;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_spans,spans,impl_cnt_spans);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_PAReceiveRLEPageWithPup_marshall6(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void Sync(const bool &clear);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxyElement_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::Sync(const bool &clear, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const bool &clear
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)clear;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)clear;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_Sync_marshall7(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void emit(int ID, int offset);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxyElement_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::emit(int ID, int offset, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int ID, int offset
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ID;
    implP|offset;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ID;
    implP|offset;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_emit_marshall8(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: MSA_PageArray(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: MSA_PageArray();
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
CkArrayID CProxy_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::ckNew(const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_MSA_PageArray_void(), opts);
  return gId;
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_MSA_PageArray_void(), _ck_array_creation_cb, opts, impl_msg);
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
CkArrayID CProxy_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::ckNew(const int s1, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_MSA_PageArray_void(), opts);
  return gId;
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::ckNew(const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_MSA_PageArray_void(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
int CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::reg_MSA_PageArray_void() {
  int epidx = CkRegisterEp("MSA_PageArray()",
      reinterpret_cast<CkCallFnPtr>(_call_MSA_PageArray_void), 0, __idx, 0);
  return epidx;
}

template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_call_MSA_PageArray_void(void* impl_msg, void* impl_obj_void)
{
  MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> * impl_obj = static_cast<MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> *>(impl_obj_void);
  new (impl_obj_void) MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void setCacheProxy(const CProxy_MSA_CacheGroup<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &cache);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::setCacheProxy(const CProxy_MSA_CacheGroup<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &cache, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CProxy_MSA_CacheGroup<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &cache
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_MSA_CacheGroup<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE>>::type>::type &)cache;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_MSA_CacheGroup<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE>>::type>::type &)cache;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_setCacheProxy_marshall2(),0);
}

// Entry point registration function
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
int CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::reg_setCacheProxy_marshall2() {
  int epidx = CkRegisterEp("setCacheProxy(const CProxy_MSA_CacheGroup<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &cache)",
      reinterpret_cast<CkCallFnPtr>(_call_setCacheProxy_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_setCacheProxy_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_setCacheProxy_marshall2);

  return epidx;
}

template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_call_setCacheProxy_marshall2(void* impl_msg, void* impl_obj_void)
{
  MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> * impl_obj = static_cast<MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CProxy_MSA_CacheGroup<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &cache*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CProxy_MSA_CacheGroup<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE>> cache;
  implP|cache;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setCacheProxy(std::move(cache.t));
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
int CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_callmarshall_setCacheProxy_marshall2(char* impl_buf, void* impl_obj_void) {
  MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> * impl_obj = static_cast<MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> *>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CProxy_MSA_CacheGroup<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &cache*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CProxy_MSA_CacheGroup<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE>> cache;
  implP|cache;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setCacheProxy(std::move(cache.t));
  return implP.size();
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_marshallmessagepup_setCacheProxy_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CProxy_MSA_CacheGroup<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &cache*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CProxy_MSA_CacheGroup<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE>> cache;
  implP|cache;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("cache");
  implDestP|cache;
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> PUPable_def_template_nonInst(SINGLE_ARG(Closure_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::setCacheProxy_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void GetPage(int pe);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::GetPage(int pe, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int pe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|pe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|pe;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_GetPage_marshall3(),0);
}

// Entry point registration function
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
int CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::reg_GetPage_marshall3() {
  int epidx = CkRegisterEp("GetPage(int pe)",
      reinterpret_cast<CkCallFnPtr>(_call_GetPage_marshall3), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_GetPage_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_GetPage_marshall3);

  return epidx;
}

template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_call_GetPage_marshall3(void* impl_msg, void* impl_obj_void)
{
  MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> * impl_obj = static_cast<MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int pe*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> pe;
  implP|pe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->GetPage(std::move(pe.t));
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
int CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_callmarshall_GetPage_marshall3(char* impl_buf, void* impl_obj_void) {
  MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> * impl_obj = static_cast<MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> *>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int pe*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> pe;
  implP|pe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->GetPage(std::move(pe.t));
  return implP.size();
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_marshallmessagepup_GetPage_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int pe*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> pe;
  implP|pe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("pe");
  implDestP|pe;
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> PUPable_def_template_nonInst(SINGLE_ARG(Closure_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::GetPage_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void PAReceivePage(const ENTRY_TYPE *page, int pe, const MSA_Page_Fault_t &pageState);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::PAReceivePage(const ENTRY_TYPE *page, int pe, const MSA_Page_Fault_t &pageState, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const ENTRY_TYPE *page, int pe, const MSA_Page_Fault_t &pageState
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_page, impl_cnt_page;
  impl_off_page=impl_off=CK_ALIGN(impl_off,sizeof(ENTRY_TYPE));
  impl_off+=(impl_cnt_page=sizeof(ENTRY_TYPE)*(ENTRIES_PER_PAGE));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_page;
    implP|impl_cnt_page;
    implP|pe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MSA_Page_Fault_t>::type>::type &)pageState;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_page;
    implP|impl_cnt_page;
    implP|pe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MSA_Page_Fault_t>::type>::type &)pageState;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_page,page,impl_cnt_page);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_PAReceivePage_marshall4(),0);
}

// Entry point registration function
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
int CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::reg_PAReceivePage_marshall4() {
  int epidx = CkRegisterEp("PAReceivePage(const ENTRY_TYPE *page, int pe, const MSA_Page_Fault_t &pageState)",
      reinterpret_cast<CkCallFnPtr>(_call_PAReceivePage_marshall4), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_PAReceivePage_marshall4);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_PAReceivePage_marshall4);

  return epidx;
}

template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_call_PAReceivePage_marshall4(void* impl_msg, void* impl_obj_void)
{
  MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> * impl_obj = static_cast<MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const ENTRY_TYPE *page, int pe, const MSA_Page_Fault_t &pageState*/
  PUP::fromMem implP(impl_buf);
  int impl_off_page, impl_cnt_page;
  implP|impl_off_page;
  implP|impl_cnt_page;
  PUP::detail::TemporaryObjectHolder<int> pe;
  implP|pe;
  PUP::detail::TemporaryObjectHolder<MSA_Page_Fault_t> pageState;
  implP|pageState;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  ENTRY_TYPE *page=(ENTRY_TYPE *)(impl_buf+impl_off_page);
  impl_obj->PAReceivePage(page, std::move(pe.t), std::move(pageState.t));
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
int CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_callmarshall_PAReceivePage_marshall4(char* impl_buf, void* impl_obj_void) {
  MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> * impl_obj = static_cast<MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> *>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const ENTRY_TYPE *page, int pe, const MSA_Page_Fault_t &pageState*/
  PUP::fromMem implP(impl_buf);
  int impl_off_page, impl_cnt_page;
  implP|impl_off_page;
  implP|impl_cnt_page;
  PUP::detail::TemporaryObjectHolder<int> pe;
  implP|pe;
  PUP::detail::TemporaryObjectHolder<MSA_Page_Fault_t> pageState;
  implP|pageState;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  ENTRY_TYPE *page=(ENTRY_TYPE *)(impl_buf+impl_off_page);
  impl_obj->PAReceivePage(page, std::move(pe.t), std::move(pageState.t));
  return implP.size();
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_marshallmessagepup_PAReceivePage_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const ENTRY_TYPE *page, int pe, const MSA_Page_Fault_t &pageState*/
  PUP::fromMem implP(impl_buf);
  int impl_off_page, impl_cnt_page;
  implP|impl_off_page;
  implP|impl_cnt_page;
  PUP::detail::TemporaryObjectHolder<int> pe;
  implP|pe;
  PUP::detail::TemporaryObjectHolder<MSA_Page_Fault_t> pageState;
  implP|pageState;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  ENTRY_TYPE *page=(ENTRY_TYPE *)(impl_buf+impl_off_page);
  if (implDestP.hasComments()) implDestP.comment("page");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*page))<impl_cnt_page;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|page[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("pe");
  implDestP|pe;
  if (implDestP.hasComments()) implDestP.comment("pageState");
  implDestP|pageState;
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> PUPable_def_template_nonInst(SINGLE_ARG(Closure_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::PAReceivePage_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void PAReceiveRLEPage(const MSA_WriteSpan_t *spans, unsigned int nSpans, const ENTRY_TYPE *entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::PAReceiveRLEPage(const MSA_WriteSpan_t *spans, unsigned int nSpans, const ENTRY_TYPE *entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const MSA_WriteSpan_t *spans, unsigned int nSpans, const ENTRY_TYPE *entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_spans, impl_cnt_spans;
  impl_off_spans=impl_off=CK_ALIGN(impl_off,sizeof(MSA_WriteSpan_t));
  impl_off+=(impl_cnt_spans=sizeof(MSA_WriteSpan_t)*(nSpans));
  int impl_off_entries, impl_cnt_entries;
  impl_off_entries=impl_off=CK_ALIGN(impl_off,sizeof(ENTRY_TYPE));
  impl_off+=(impl_cnt_entries=sizeof(ENTRY_TYPE)*(nEntries));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_spans;
    implP|impl_cnt_spans;
    implP|nSpans;
    implP|impl_off_entries;
    implP|impl_cnt_entries;
    implP|nEntries;
    implP|pe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MSA_Page_Fault_t>::type>::type &)pageState;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_spans;
    implP|impl_cnt_spans;
    implP|nSpans;
    implP|impl_off_entries;
    implP|impl_cnt_entries;
    implP|nEntries;
    implP|pe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MSA_Page_Fault_t>::type>::type &)pageState;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_spans,spans,impl_cnt_spans);
  memcpy(impl_buf+impl_off_entries,entries,impl_cnt_entries);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_PAReceiveRLEPage_marshall5(),0);
}

// Entry point registration function
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
int CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::reg_PAReceiveRLEPage_marshall5() {
  int epidx = CkRegisterEp("PAReceiveRLEPage(const MSA_WriteSpan_t *spans, unsigned int nSpans, const ENTRY_TYPE *entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState)",
      reinterpret_cast<CkCallFnPtr>(_call_PAReceiveRLEPage_marshall5), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_PAReceiveRLEPage_marshall5);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_PAReceiveRLEPage_marshall5);

  return epidx;
}

template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_call_PAReceiveRLEPage_marshall5(void* impl_msg, void* impl_obj_void)
{
  MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> * impl_obj = static_cast<MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const MSA_WriteSpan_t *spans, unsigned int nSpans, const ENTRY_TYPE *entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState*/
  PUP::fromMem implP(impl_buf);
  int impl_off_spans, impl_cnt_spans;
  implP|impl_off_spans;
  implP|impl_cnt_spans;
  PUP::detail::TemporaryObjectHolder<unsigned int> nSpans;
  implP|nSpans;
  int impl_off_entries, impl_cnt_entries;
  implP|impl_off_entries;
  implP|impl_cnt_entries;
  PUP::detail::TemporaryObjectHolder<unsigned int> nEntries;
  implP|nEntries;
  PUP::detail::TemporaryObjectHolder<int> pe;
  implP|pe;
  PUP::detail::TemporaryObjectHolder<MSA_Page_Fault_t> pageState;
  implP|pageState;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  MSA_WriteSpan_t *spans=(MSA_WriteSpan_t *)(impl_buf+impl_off_spans);
  ENTRY_TYPE *entries=(ENTRY_TYPE *)(impl_buf+impl_off_entries);
  impl_obj->PAReceiveRLEPage(spans, std::move(nSpans.t), entries, std::move(nEntries.t), std::move(pe.t), std::move(pageState.t));
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
int CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_callmarshall_PAReceiveRLEPage_marshall5(char* impl_buf, void* impl_obj_void) {
  MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> * impl_obj = static_cast<MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> *>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const MSA_WriteSpan_t *spans, unsigned int nSpans, const ENTRY_TYPE *entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState*/
  PUP::fromMem implP(impl_buf);
  int impl_off_spans, impl_cnt_spans;
  implP|impl_off_spans;
  implP|impl_cnt_spans;
  PUP::detail::TemporaryObjectHolder<unsigned int> nSpans;
  implP|nSpans;
  int impl_off_entries, impl_cnt_entries;
  implP|impl_off_entries;
  implP|impl_cnt_entries;
  PUP::detail::TemporaryObjectHolder<unsigned int> nEntries;
  implP|nEntries;
  PUP::detail::TemporaryObjectHolder<int> pe;
  implP|pe;
  PUP::detail::TemporaryObjectHolder<MSA_Page_Fault_t> pageState;
  implP|pageState;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  MSA_WriteSpan_t *spans=(MSA_WriteSpan_t *)(impl_buf+impl_off_spans);
  ENTRY_TYPE *entries=(ENTRY_TYPE *)(impl_buf+impl_off_entries);
  impl_obj->PAReceiveRLEPage(spans, std::move(nSpans.t), entries, std::move(nEntries.t), std::move(pe.t), std::move(pageState.t));
  return implP.size();
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_marshallmessagepup_PAReceiveRLEPage_marshall5(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const MSA_WriteSpan_t *spans, unsigned int nSpans, const ENTRY_TYPE *entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState*/
  PUP::fromMem implP(impl_buf);
  int impl_off_spans, impl_cnt_spans;
  implP|impl_off_spans;
  implP|impl_cnt_spans;
  PUP::detail::TemporaryObjectHolder<unsigned int> nSpans;
  implP|nSpans;
  int impl_off_entries, impl_cnt_entries;
  implP|impl_off_entries;
  implP|impl_cnt_entries;
  PUP::detail::TemporaryObjectHolder<unsigned int> nEntries;
  implP|nEntries;
  PUP::detail::TemporaryObjectHolder<int> pe;
  implP|pe;
  PUP::detail::TemporaryObjectHolder<MSA_Page_Fault_t> pageState;
  implP|pageState;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  MSA_WriteSpan_t *spans=(MSA_WriteSpan_t *)(impl_buf+impl_off_spans);
  ENTRY_TYPE *entries=(ENTRY_TYPE *)(impl_buf+impl_off_entries);
  if (implDestP.hasComments()) implDestP.comment("spans");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*spans))<impl_cnt_spans;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|spans[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("nSpans");
  implDestP|nSpans;
  if (implDestP.hasComments()) implDestP.comment("entries");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*entries))<impl_cnt_entries;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|entries[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("nEntries");
  implDestP|nEntries;
  if (implDestP.hasComments()) implDestP.comment("pe");
  implDestP|pe;
  if (implDestP.hasComments()) implDestP.comment("pageState");
  implDestP|pageState;
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> PUPable_def_template_nonInst(SINGLE_ARG(Closure_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::PAReceiveRLEPage_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void PAReceiveRLEPageWithPup(const MSA_WriteSpan_t *spans, unsigned int nSpans, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::PAReceiveRLEPageWithPup(const MSA_WriteSpan_t *spans, unsigned int nSpans, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const MSA_WriteSpan_t *spans, unsigned int nSpans, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_spans, impl_cnt_spans;
  impl_off_spans=impl_off=CK_ALIGN(impl_off,sizeof(MSA_WriteSpan_t));
  impl_off+=(impl_cnt_spans=sizeof(MSA_WriteSpan_t)*(nSpans));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_spans;
    implP|impl_cnt_spans;
    implP|nSpans;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE>>::type>::type &)entries;
    implP|nEntries;
    implP|pe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MSA_Page_Fault_t>::type>::type &)pageState;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_spans;
    implP|impl_cnt_spans;
    implP|nSpans;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE>>::type>::type &)entries;
    implP|nEntries;
    implP|pe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MSA_Page_Fault_t>::type>::type &)pageState;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_spans,spans,impl_cnt_spans);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_PAReceiveRLEPageWithPup_marshall6(),0);
}

// Entry point registration function
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
int CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::reg_PAReceiveRLEPageWithPup_marshall6() {
  int epidx = CkRegisterEp("PAReceiveRLEPageWithPup(const MSA_WriteSpan_t *spans, unsigned int nSpans, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState)",
      reinterpret_cast<CkCallFnPtr>(_call_PAReceiveRLEPageWithPup_marshall6), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_PAReceiveRLEPageWithPup_marshall6);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_PAReceiveRLEPageWithPup_marshall6);

  return epidx;
}

template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_call_PAReceiveRLEPageWithPup_marshall6(void* impl_msg, void* impl_obj_void)
{
  MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> * impl_obj = static_cast<MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const MSA_WriteSpan_t *spans, unsigned int nSpans, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState*/
  PUP::fromMem implP(impl_buf);
  int impl_off_spans, impl_cnt_spans;
  implP|impl_off_spans;
  implP|impl_cnt_spans;
  PUP::detail::TemporaryObjectHolder<unsigned int> nSpans;
  implP|nSpans;
  PUP::detail::TemporaryObjectHolder<MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE>> entries;
  implP|entries;
  PUP::detail::TemporaryObjectHolder<unsigned int> nEntries;
  implP|nEntries;
  PUP::detail::TemporaryObjectHolder<int> pe;
  implP|pe;
  PUP::detail::TemporaryObjectHolder<MSA_Page_Fault_t> pageState;
  implP|pageState;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  MSA_WriteSpan_t *spans=(MSA_WriteSpan_t *)(impl_buf+impl_off_spans);
  impl_obj->PAReceiveRLEPageWithPup(spans, std::move(nSpans.t), std::move(entries.t), std::move(nEntries.t), std::move(pe.t), std::move(pageState.t));
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
int CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_callmarshall_PAReceiveRLEPageWithPup_marshall6(char* impl_buf, void* impl_obj_void) {
  MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> * impl_obj = static_cast<MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> *>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const MSA_WriteSpan_t *spans, unsigned int nSpans, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState*/
  PUP::fromMem implP(impl_buf);
  int impl_off_spans, impl_cnt_spans;
  implP|impl_off_spans;
  implP|impl_cnt_spans;
  PUP::detail::TemporaryObjectHolder<unsigned int> nSpans;
  implP|nSpans;
  PUP::detail::TemporaryObjectHolder<MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE>> entries;
  implP|entries;
  PUP::detail::TemporaryObjectHolder<unsigned int> nEntries;
  implP|nEntries;
  PUP::detail::TemporaryObjectHolder<int> pe;
  implP|pe;
  PUP::detail::TemporaryObjectHolder<MSA_Page_Fault_t> pageState;
  implP|pageState;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  MSA_WriteSpan_t *spans=(MSA_WriteSpan_t *)(impl_buf+impl_off_spans);
  impl_obj->PAReceiveRLEPageWithPup(spans, std::move(nSpans.t), std::move(entries.t), std::move(nEntries.t), std::move(pe.t), std::move(pageState.t));
  return implP.size();
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_marshallmessagepup_PAReceiveRLEPageWithPup_marshall6(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const MSA_WriteSpan_t *spans, unsigned int nSpans, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState*/
  PUP::fromMem implP(impl_buf);
  int impl_off_spans, impl_cnt_spans;
  implP|impl_off_spans;
  implP|impl_cnt_spans;
  PUP::detail::TemporaryObjectHolder<unsigned int> nSpans;
  implP|nSpans;
  PUP::detail::TemporaryObjectHolder<MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE>> entries;
  implP|entries;
  PUP::detail::TemporaryObjectHolder<unsigned int> nEntries;
  implP|nEntries;
  PUP::detail::TemporaryObjectHolder<int> pe;
  implP|pe;
  PUP::detail::TemporaryObjectHolder<MSA_Page_Fault_t> pageState;
  implP|pageState;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  MSA_WriteSpan_t *spans=(MSA_WriteSpan_t *)(impl_buf+impl_off_spans);
  if (implDestP.hasComments()) implDestP.comment("spans");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*spans))<impl_cnt_spans;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|spans[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("nSpans");
  implDestP|nSpans;
  if (implDestP.hasComments()) implDestP.comment("entries");
  implDestP|entries;
  if (implDestP.hasComments()) implDestP.comment("nEntries");
  implDestP|nEntries;
  if (implDestP.hasComments()) implDestP.comment("pe");
  implDestP|pe;
  if (implDestP.hasComments()) implDestP.comment("pageState");
  implDestP|pageState;
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> PUPable_def_template_nonInst(SINGLE_ARG(Closure_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::PAReceiveRLEPageWithPup_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void Sync(const bool &clear);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::Sync(const bool &clear, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const bool &clear
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)clear;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)clear;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_Sync_marshall7(),0);
}

// Entry point registration function
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
int CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::reg_Sync_marshall7() {
  int epidx = CkRegisterEp("Sync(const bool &clear)",
      reinterpret_cast<CkCallFnPtr>(_call_Sync_marshall7), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_Sync_marshall7);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_Sync_marshall7);

  return epidx;
}

template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_call_Sync_marshall7(void* impl_msg, void* impl_obj_void)
{
  MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> * impl_obj = static_cast<MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const bool &clear*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<bool> clear;
  implP|clear;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->Sync(std::move(clear.t));
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
int CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_callmarshall_Sync_marshall7(char* impl_buf, void* impl_obj_void) {
  MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> * impl_obj = static_cast<MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> *>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const bool &clear*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<bool> clear;
  implP|clear;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->Sync(std::move(clear.t));
  return implP.size();
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_marshallmessagepup_Sync_marshall7(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const bool &clear*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<bool> clear;
  implP|clear;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("clear");
  implDestP|clear;
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> PUPable_def_template_nonInst(SINGLE_ARG(Closure_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::Sync_7_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void emit(int ID, int offset);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxy_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::emit(int ID, int offset, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int ID, int offset
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ID;
    implP|offset;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ID;
    implP|offset;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_emit_marshall8(),0);
}

// Entry point registration function
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
int CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::reg_emit_marshall8() {
  int epidx = CkRegisterEp("emit(int ID, int offset)",
      reinterpret_cast<CkCallFnPtr>(_call_emit_marshall8), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_emit_marshall8);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_emit_marshall8);

  return epidx;
}

template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_call_emit_marshall8(void* impl_msg, void* impl_obj_void)
{
  MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> * impl_obj = static_cast<MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int ID, int offset*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> ID;
  implP|ID;
  PUP::detail::TemporaryObjectHolder<int> offset;
  implP|offset;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->emit(std::move(ID.t), std::move(offset.t));
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
int CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_callmarshall_emit_marshall8(char* impl_buf, void* impl_obj_void) {
  MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> * impl_obj = static_cast<MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> *>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int ID, int offset*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> ID;
  implP|ID;
  PUP::detail::TemporaryObjectHolder<int> offset;
  implP|offset;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->emit(std::move(ID.t), std::move(offset.t));
  return implP.size();
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_marshallmessagepup_emit_marshall8(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int ID, int offset*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> ID;
  implP|ID;
  PUP::detail::TemporaryObjectHolder<int> offset;
  implP|offset;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("ID");
  implDestP|ID;
  if (implDestP.hasComments()) implDestP.comment("offset");
  implDestP|offset;
}
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> PUPable_def_template_nonInst(SINGLE_ARG(Closure_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::emit_8_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: MSA_PageArray(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
int CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::reg_MSA_PageArray_CkMigrateMessage() {
  int epidx = CkRegisterEp("MSA_PageArray(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_MSA_PageArray_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::_call_MSA_PageArray_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> > c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: MSA_PageArray();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void setCacheProxy(const CProxy_MSA_CacheGroup<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &cache);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxySection_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::setCacheProxy(const CProxy_MSA_CacheGroup<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &cache, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CProxy_MSA_CacheGroup<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &cache
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_MSA_CacheGroup<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE>>::type>::type &)cache;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_MSA_CacheGroup<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE>>::type>::type &)cache;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_setCacheProxy_marshall2(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void GetPage(int pe);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxySection_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::GetPage(int pe, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int pe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|pe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|pe;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_GetPage_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void PAReceivePage(const ENTRY_TYPE *page, int pe, const MSA_Page_Fault_t &pageState);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxySection_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::PAReceivePage(const ENTRY_TYPE *page, int pe, const MSA_Page_Fault_t &pageState, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const ENTRY_TYPE *page, int pe, const MSA_Page_Fault_t &pageState
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_page, impl_cnt_page;
  impl_off_page=impl_off=CK_ALIGN(impl_off,sizeof(ENTRY_TYPE));
  impl_off+=(impl_cnt_page=sizeof(ENTRY_TYPE)*(ENTRIES_PER_PAGE));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_page;
    implP|impl_cnt_page;
    implP|pe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MSA_Page_Fault_t>::type>::type &)pageState;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_page;
    implP|impl_cnt_page;
    implP|pe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MSA_Page_Fault_t>::type>::type &)pageState;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_page,page,impl_cnt_page);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_PAReceivePage_marshall4(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void PAReceiveRLEPage(const MSA_WriteSpan_t *spans, unsigned int nSpans, const ENTRY_TYPE *entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxySection_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::PAReceiveRLEPage(const MSA_WriteSpan_t *spans, unsigned int nSpans, const ENTRY_TYPE *entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const MSA_WriteSpan_t *spans, unsigned int nSpans, const ENTRY_TYPE *entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_spans, impl_cnt_spans;
  impl_off_spans=impl_off=CK_ALIGN(impl_off,sizeof(MSA_WriteSpan_t));
  impl_off+=(impl_cnt_spans=sizeof(MSA_WriteSpan_t)*(nSpans));
  int impl_off_entries, impl_cnt_entries;
  impl_off_entries=impl_off=CK_ALIGN(impl_off,sizeof(ENTRY_TYPE));
  impl_off+=(impl_cnt_entries=sizeof(ENTRY_TYPE)*(nEntries));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_spans;
    implP|impl_cnt_spans;
    implP|nSpans;
    implP|impl_off_entries;
    implP|impl_cnt_entries;
    implP|nEntries;
    implP|pe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MSA_Page_Fault_t>::type>::type &)pageState;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_spans;
    implP|impl_cnt_spans;
    implP|nSpans;
    implP|impl_off_entries;
    implP|impl_cnt_entries;
    implP|nEntries;
    implP|pe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MSA_Page_Fault_t>::type>::type &)pageState;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_spans,spans,impl_cnt_spans);
  memcpy(impl_buf+impl_off_entries,entries,impl_cnt_entries);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_PAReceiveRLEPage_marshall5(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void PAReceiveRLEPageWithPup(const MSA_WriteSpan_t *spans, unsigned int nSpans, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxySection_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::PAReceiveRLEPageWithPup(const MSA_WriteSpan_t *spans, unsigned int nSpans, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const MSA_WriteSpan_t *spans, unsigned int nSpans, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_spans, impl_cnt_spans;
  impl_off_spans=impl_off=CK_ALIGN(impl_off,sizeof(MSA_WriteSpan_t));
  impl_off+=(impl_cnt_spans=sizeof(MSA_WriteSpan_t)*(nSpans));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_spans;
    implP|impl_cnt_spans;
    implP|nSpans;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE>>::type>::type &)entries;
    implP|nEntries;
    implP|pe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MSA_Page_Fault_t>::type>::type &)pageState;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_spans;
    implP|impl_cnt_spans;
    implP|nSpans;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE>>::type>::type &)entries;
    implP|nEntries;
    implP|pe;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MSA_Page_Fault_t>::type>::type &)pageState;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_spans,spans,impl_cnt_spans);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_PAReceiveRLEPageWithPup_marshall6(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void Sync(const bool &clear);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxySection_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::Sync(const bool &clear, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const bool &clear
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)clear;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)clear;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_Sync_marshall7(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void emit(int ID, int offset);
 */
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
void CProxySection_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::emit(int ID, int offset, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int ID, int offset
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ID;
    implP|offset;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ID;
    implP|offset;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::idx_emit_marshall8(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: MSA_PageArray(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifdef CK_TEMPLATES_ONLY
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> void CkIndex_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> ::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, 1);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: MSA_PageArray();
  idx_MSA_PageArray_void();
  CkRegisterDefaultCtor(__idx, idx_MSA_PageArray_void());

  // REG: void setCacheProxy(const CProxy_MSA_CacheGroup<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &cache);
  idx_setCacheProxy_marshall2();

  // REG: void GetPage(int pe);
  idx_GetPage_marshall3();

  // REG: void PAReceivePage(const ENTRY_TYPE *page, int pe, const MSA_Page_Fault_t &pageState);
  idx_PAReceivePage_marshall4();

  // REG: void PAReceiveRLEPage(const MSA_WriteSpan_t *spans, unsigned int nSpans, const ENTRY_TYPE *entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState);
  idx_PAReceiveRLEPage_marshall5();

  // REG: void PAReceiveRLEPageWithPup(const MSA_WriteSpan_t *spans, unsigned int nSpans, const MSA_PageT<ENTRY_TYPE,ENTRY_OPS_CLASS,ENTRIES_PER_PAGE> &entries, unsigned int nEntries, int pe, const MSA_Page_Fault_t &pageState);
  idx_PAReceiveRLEPageWithPup_marshall6();

  // REG: void Sync(const bool &clear);
  idx_Sync_marshall7();

  // REG: void emit(int ID, int offset);
  idx_emit_marshall8();

  // REG: MSA_PageArray(CkMigrateMessage* impl_msg);
  idx_MSA_PageArray_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_MSA_PageArray_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */
#ifdef CK_TEMPLATES_ONLY
template <class ENTRY_TYPE, class ENTRY_OPS_CLASS, unsigned int ENTRIES_PER_PAGE> 
struct CBase_MSA_PageArray : public ArrayElementT<CkIndex1D>, virtual CBase
 {
  CProxy_MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE>  thisProxy;
  CBase_MSA_PageArray() : thisProxy(this)
    , ArrayElementT<CkIndex1D>()
  { }
  CBase_MSA_PageArray(CkMigrateMessage* m) : thisProxy(this)
    , ArrayElementT<CkIndex1D>(m)  { }
  template <typename... Args>
  CBase_MSA_PageArray(Args... args) : thisProxy(this)
    , ArrayElementT<CkIndex1D>(args...)  { }
  void pup(PUP::er &p) { }
  void _sdag_pup(PUP::er &p) { }
  void virtual_pup(PUP::er &p) {
    recursive_pup<MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> >(dynamic_cast<MSA_PageArray <ENTRY_TYPE, ENTRY_OPS_CLASS, ENTRIES_PER_PAGE> *>(this), p);
}
  void parent_pup(PUP::er &p) {
    recursive_pup<ArrayElementT<CkIndex1D>>(this, p);
    p|thisProxy;
  }
};
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registermsa(void)
{
  static int _done = 0; if(_done) return; _done = 1;


}
#endif /* CK_TEMPLATES_ONLY */
