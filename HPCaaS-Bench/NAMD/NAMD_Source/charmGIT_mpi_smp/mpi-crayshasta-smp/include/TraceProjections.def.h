


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */






/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_KMeansBOC::startKMeansAnalysis_2_closure : public SDAG::Closure {
      

      startKMeansAnalysis_2_closure() {
        init();
      }
      startKMeansAnalysis_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~startKMeansAnalysis_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(startKMeansAnalysis_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_KMeansBOC::flushCheck_3_closure : public SDAG::Closure {
            bool impl_noname_5;


      flushCheck_3_closure() {
        init();
      }
      flushCheck_3_closure(CkMigrateMessage*) {
        init();
      }
            bool & getP0() { return impl_noname_5;}
      void pup(PUP::er& __p) {
        __p | impl_noname_5;
        packClosure(__p);
      }
      virtual ~flushCheck_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(flushCheck_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_KMeansBOC::flushCheckDone_4_closure : public SDAG::Closure {
      

      flushCheckDone_4_closure() {
        init();
      }
      flushCheckDone_4_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~flushCheckDone_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(flushCheckDone_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_KMeansBOC::getNextPhaseMetrics_5_closure : public SDAG::Closure {
      

      getNextPhaseMetrics_5_closure() {
        init();
      }
      getNextPhaseMetrics_5_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~getNextPhaseMetrics_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(getNextPhaseMetrics_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_KMeansBOC::updateKSeeds_8_closure : public SDAG::Closure {
            double *result;
            int n;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      updateKSeeds_8_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      updateKSeeds_8_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            double *& getP0() { return result;}
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
  int impl_off_result, impl_cnt_result;
  implP|impl_off_result;
  implP|impl_cnt_result;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
          impl_buf+=CK_ALIGN(implP.size(),16);
          result = (double *)(impl_buf+impl_off_result);
        }
      }
      virtual ~updateKSeeds_8_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(updateKSeeds_8_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_KMeansBOC::phaseDone_12_closure : public SDAG::Closure {
      

      phaseDone_12_closure() {
        init();
      }
      phaseDone_12_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~phaseDone_12_closure() {
      }
      PUPable_decl(SINGLE_ARG(phaseDone_12_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceProjectionsBOC::traceProjectionsParallelShutdown_2_closure : public SDAG::Closure {
            int impl_noname_8;


      traceProjectionsParallelShutdown_2_closure() {
        init();
      }
      traceProjectionsParallelShutdown_2_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return impl_noname_8;}
      void pup(PUP::er& __p) {
        __p | impl_noname_8;
        packClosure(__p);
      }
      virtual ~traceProjectionsParallelShutdown_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(traceProjectionsParallelShutdown_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceProjectionsBOC::startTimeAnalysis_3_closure : public SDAG::Closure {
      

      startTimeAnalysis_3_closure() {
        init();
      }
      startTimeAnalysis_3_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~startTimeAnalysis_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(startTimeAnalysis_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceProjectionsBOC::startTimeDone_4_closure : public SDAG::Closure {
            double impl_noname_9;


      startTimeDone_4_closure() {
        init();
      }
      startTimeDone_4_closure(CkMigrateMessage*) {
        init();
      }
            double & getP0() { return impl_noname_9;}
      void pup(PUP::er& __p) {
        __p | impl_noname_9;
        packClosure(__p);
      }
      virtual ~startTimeDone_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(startTimeDone_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceProjectionsBOC::startEndTimeAnalysis_5_closure : public SDAG::Closure {
      

      startEndTimeAnalysis_5_closure() {
        init();
      }
      startEndTimeAnalysis_5_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~startEndTimeAnalysis_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(startEndTimeAnalysis_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceProjectionsBOC::endTimeDone_6_closure : public SDAG::Closure {
            double impl_noname_a;


      endTimeDone_6_closure() {
        init();
      }
      endTimeDone_6_closure(CkMigrateMessage*) {
        init();
      }
            double & getP0() { return impl_noname_a;}
      void pup(PUP::er& __p) {
        __p | impl_noname_a;
        packClosure(__p);
      }
      virtual ~endTimeDone_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(endTimeDone_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceProjectionsBOC::kMeansDone_7_closure : public SDAG::Closure {
      

      kMeansDone_7_closure() {
        init();
      }
      kMeansDone_7_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~kMeansDone_7_closure() {
      }
      PUPable_decl(SINGLE_ARG(kMeansDone_7_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceProjectionsBOC::kMeansDoneFlushed_8_closure : public SDAG::Closure {
      

      kMeansDoneFlushed_8_closure() {
        init();
      }
      kMeansDoneFlushed_8_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~kMeansDoneFlushed_8_closure() {
      }
      PUPable_decl(SINGLE_ARG(kMeansDoneFlushed_8_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceProjectionsBOC::finalize_9_closure : public SDAG::Closure {
      

      finalize_9_closure() {
        init();
      }
      finalize_9_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~finalize_9_closure() {
      }
      PUPable_decl(SINGLE_ARG(finalize_9_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceProjectionsBOC::closingTraces_10_closure : public SDAG::Closure {
      

      closingTraces_10_closure() {
        init();
      }
      closingTraces_10_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~closingTraces_10_closure() {
      }
      PUPable_decl(SINGLE_ARG(closingTraces_10_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceProjectionsBOC::closeParallelShutdown_11_closure : public SDAG::Closure {
      

      closeParallelShutdown_11_closure() {
        init();
      }
      closeParallelShutdown_11_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~closeParallelShutdown_11_closure() {
      }
      PUPable_decl(SINGLE_ARG(closeParallelShutdown_11_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TraceProjectionsBOC::flush_warning_12_closure : public SDAG::Closure {
            int pe;


      flush_warning_12_closure() {
        init();
      }
      flush_warning_12_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return pe;}
      void pup(PUP::er& __p) {
        __p | pe;
        packClosure(__p);
      }
      virtual ~flush_warning_12_closure() {
      }
      PUPable_decl(SINGLE_ARG(flush_warning_12_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: message KMeansStatsMessage{
bool filter[];
double kSeedsPos[];
double stats[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_KMeansStatsMessage::operator new(size_t s){
  return KMeansStatsMessage::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_KMeansStatsMessage::operator new(size_t s, int* sz){
  return KMeansStatsMessage::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_KMeansStatsMessage::operator new(size_t s, int* sz,const int pb){
  return KMeansStatsMessage::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_KMeansStatsMessage::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return KMeansStatsMessage::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_KMeansStatsMessage::operator new(size_t s, int sz0, int sz1, int sz2) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return KMeansStatsMessage::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_KMeansStatsMessage::operator new(size_t s, int sz0, int sz1, int sz2, const int p) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return KMeansStatsMessage::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_KMeansStatsMessage::operator new(size_t s, int sz0, int sz1, int sz2, const int p, const GroupDepNum groupDepNum) {
  int sizes[3];
  sizes[0] = sz0;
  sizes[1] = sz1;
  sizes[2] = sz2;
  return KMeansStatsMessage::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_KMeansStatsMessage::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(bool)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN_DEFAULT(sizeof(double)*sizes[1]);
  if(sizes==0)
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[3] = CkpvAccess(_offsets)[2] + ALIGN_DEFAULT(sizeof(double)*sizes[2]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[3], pb, groupDepNum);
}
CMessage_KMeansStatsMessage::CMessage_KMeansStatsMessage() {
KMeansStatsMessage *newmsg = (KMeansStatsMessage *)this;
  newmsg->filter = (bool *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->kSeedsPos = (double *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
  newmsg->stats = (double *) ((char *)newmsg + CkpvAccess(_offsets)[2]);
}
void CMessage_KMeansStatsMessage::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_KMeansStatsMessage::pack(KMeansStatsMessage *msg) {
  msg->filter = (bool *) ((char *)msg->filter - (char *)msg);
  msg->kSeedsPos = (double *) ((char *)msg->kSeedsPos - (char *)msg);
  msg->stats = (double *) ((char *)msg->stats - (char *)msg);
  return (void *) msg;
}
KMeansStatsMessage* CMessage_KMeansStatsMessage::unpack(void* buf) {
  KMeansStatsMessage *msg = (KMeansStatsMessage *) buf;
  msg->filter = (bool *) ((size_t)msg->filter + (char *)msg);
  msg->kSeedsPos = (double *) ((size_t)msg->kSeedsPos + (char *)msg);
  msg->stats = (double *) ((size_t)msg->stats + (char *)msg);
  return msg;
}
int CMessage_KMeansStatsMessage::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message KSeedsMessage{
double kSeedsPos[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_KSeedsMessage::operator new(size_t s){
  return KSeedsMessage::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_KSeedsMessage::operator new(size_t s, int* sz){
  return KSeedsMessage::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_KSeedsMessage::operator new(size_t s, int* sz,const int pb){
  return KSeedsMessage::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_KSeedsMessage::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return KSeedsMessage::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_KSeedsMessage::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return KSeedsMessage::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_KSeedsMessage::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return KSeedsMessage::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_KSeedsMessage::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return KSeedsMessage::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_KSeedsMessage::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(double)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_KSeedsMessage::CMessage_KSeedsMessage() {
KSeedsMessage *newmsg = (KSeedsMessage *)this;
  newmsg->kSeedsPos = (double *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_KSeedsMessage::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_KSeedsMessage::pack(KSeedsMessage *msg) {
  msg->kSeedsPos = (double *) ((char *)msg->kSeedsPos - (char *)msg);
  return (void *) msg;
}
KSeedsMessage* CMessage_KSeedsMessage::unpack(void* buf) {
  KSeedsMessage *msg = (KSeedsMessage *) buf;
  msg->kSeedsPos = (double *) ((size_t)msg->kSeedsPos + (char *)msg);
  return msg;
}
int CMessage_KSeedsMessage::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message KSelectionMessage{
int minIDs[];
int maxIDs[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_KSelectionMessage::operator new(size_t s){
  return KSelectionMessage::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_KSelectionMessage::operator new(size_t s, int* sz){
  return KSelectionMessage::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_KSelectionMessage::operator new(size_t s, int* sz,const int pb){
  return KSelectionMessage::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_KSelectionMessage::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return KSelectionMessage::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_KSelectionMessage::operator new(size_t s, int sz0, int sz1) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return KSelectionMessage::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_KSelectionMessage::operator new(size_t s, int sz0, int sz1, const int p) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return KSelectionMessage::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_KSelectionMessage::operator new(size_t s, int sz0, int sz1, const int p, const GroupDepNum groupDepNum) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return KSelectionMessage::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_KSelectionMessage::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(int)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN_DEFAULT(sizeof(int)*sizes[1]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[2], pb, groupDepNum);
}
CMessage_KSelectionMessage::CMessage_KSelectionMessage() {
KSelectionMessage *newmsg = (KSelectionMessage *)this;
  newmsg->minIDs = (int *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->maxIDs = (int *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
}
void CMessage_KSelectionMessage::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_KSelectionMessage::pack(KSelectionMessage *msg) {
  msg->minIDs = (int *) ((char *)msg->minIDs - (char *)msg);
  msg->maxIDs = (int *) ((char *)msg->maxIDs - (char *)msg);
  return (void *) msg;
}
KSelectionMessage* CMessage_KSelectionMessage::unpack(void* buf) {
  KSelectionMessage *msg = (KSelectionMessage *) buf;
  msg->minIDs = (int *) ((size_t)msg->minIDs + (char *)msg);
  msg->maxIDs = (int *) ((size_t)msg->maxIDs + (char *)msg);
  return msg;
}
int CMessage_KSelectionMessage::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: mainchare TraceProjectionsInit: Chare{
TraceProjectionsInit(CkArgMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_TraceProjectionsInit::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceProjectionsInit(CkArgMsg* impl_msg);
 */
CkChareID CProxy_TraceProjectionsInit::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_TraceProjectionsInit::__idx, CkIndex_TraceProjectionsInit::idx_TraceProjectionsInit_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_TraceProjectionsInit::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_TraceProjectionsInit::__idx, CkIndex_TraceProjectionsInit::idx_TraceProjectionsInit_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function
int CkIndex_TraceProjectionsInit::reg_TraceProjectionsInit_CkArgMsg() {
  int epidx = CkRegisterEp("TraceProjectionsInit(CkArgMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_TraceProjectionsInit_CkArgMsg), CMessage_CkArgMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}

void CkIndex_TraceProjectionsInit::_call_TraceProjectionsInit_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  TraceProjectionsInit* impl_obj = static_cast<TraceProjectionsInit*>(impl_obj_void);
  new (impl_obj_void) TraceProjectionsInit((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_TraceProjectionsInit::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: TraceProjectionsInit(CkArgMsg* impl_msg);
  idx_TraceProjectionsInit_CkArgMsg();
  CkRegisterMainChare(__idx, idx_TraceProjectionsInit_CkArgMsg());

}
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: readonly CkGroupID traceProjectionsGID;
 */
extern CkGroupID traceProjectionsGID;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_traceProjectionsGID(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|traceProjectionsGID;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CkGroupID kMeansGID;
 */
extern CkGroupID kMeansGID;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_kMeansGID(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|kMeansGID;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group KMeansBOC: IrrGroup{
KMeansBOC(const bool &impl_noname_0, int impl_noname_1, int impl_noname_2, double impl_noname_3, const bool &impl_noname_4);
void startKMeansAnalysis();
void flushCheck(const bool &impl_noname_5);
void flushCheckDone();
void getNextPhaseMetrics();
void globalMetricRefinement(CkReductionMsg* impl_msg);
void findInitialClusters(KMeansStatsMessage* impl_msg);
void updateKSeeds(const double *result, int n);
void updateSeedMembership(KSeedsMessage* impl_msg);
void collectDistances(KSelectionMessage* impl_msg);
void findNextMinMax(CkReductionMsg* impl_msg);
void phaseDone();
KMeansBOC(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_KMeansBOC::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: KMeansBOC(const bool &impl_noname_0, int impl_noname_1, int impl_noname_2, double impl_noname_3, const bool &impl_noname_4);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startKMeansAnalysis();
 */
void CProxyElement_KMeansBOC::startKMeansAnalysis(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_KMeansBOC::idx_startKMeansAnalysis_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_KMeansBOC::idx_startKMeansAnalysis_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_KMeansBOC::idx_startKMeansAnalysis_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void flushCheck(const bool &impl_noname_5);
 */
void CProxyElement_KMeansBOC::flushCheck(const bool &impl_noname_5, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const bool &impl_noname_5
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)impl_noname_5;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)impl_noname_5;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_KMeansBOC::idx_flushCheck_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_KMeansBOC::idx_flushCheck_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_KMeansBOC::idx_flushCheck_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
void CkIndex_KMeansBOC::_call_redn_wrapper_flushCheck_marshall3(void* impl_msg, void* impl_obj_void)
{
  KMeansBOC* impl_obj = static_cast<KMeansBOC*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  /*Unmarshall pup'd fields: const bool &impl_noname_5*/
  PUP::fromMem implP(impl_buf);
  /* non two-param case */
  PUP::detail::TemporaryObjectHolder<bool> impl_noname_5;
  implP|impl_noname_5;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->flushCheck(std::move(impl_noname_5.t));
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void flushCheckDone();
 */
void CProxyElement_KMeansBOC::flushCheckDone(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_KMeansBOC::idx_flushCheckDone_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_KMeansBOC::idx_flushCheckDone_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_KMeansBOC::idx_flushCheckDone_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getNextPhaseMetrics();
 */
void CProxyElement_KMeansBOC::getNextPhaseMetrics(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_KMeansBOC::idx_getNextPhaseMetrics_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_KMeansBOC::idx_getNextPhaseMetrics_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_KMeansBOC::idx_getNextPhaseMetrics_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void globalMetricRefinement(CkReductionMsg* impl_msg);
 */
void CProxyElement_KMeansBOC::globalMetricRefinement(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_KMeansBOC::idx_globalMetricRefinement_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_KMeansBOC::idx_globalMetricRefinement_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_KMeansBOC::idx_globalMetricRefinement_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
void CkIndex_KMeansBOC::_call_redn_wrapper_globalMetricRefinement_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  KMeansBOC* impl_obj = static_cast<KMeansBOC*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->globalMetricRefinement((CkReductionMsg*)impl_msg);
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void findInitialClusters(KMeansStatsMessage* impl_msg);
 */
void CProxyElement_KMeansBOC::findInitialClusters(KMeansStatsMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_KMeansBOC::idx_findInitialClusters_KMeansStatsMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_KMeansBOC::idx_findInitialClusters_KMeansStatsMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_KMeansBOC::idx_findInitialClusters_KMeansStatsMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateKSeeds(const double *result, int n);
 */
void CProxyElement_KMeansBOC::updateKSeeds(const double *result, int n, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const double *result, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_result, impl_cnt_result;
  impl_off_result=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_result=sizeof(double)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_result;
    implP|impl_cnt_result;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_result;
    implP|impl_cnt_result;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_result,result,impl_cnt_result);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_KMeansBOC::idx_updateKSeeds_marshall8(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_KMeansBOC::idx_updateKSeeds_marshall8(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_KMeansBOC::idx_updateKSeeds_marshall8(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
void CkIndex_KMeansBOC::_call_redn_wrapper_updateKSeeds_marshall8(void* impl_msg, void* impl_obj_void)
{
  KMeansBOC* impl_obj = static_cast<KMeansBOC*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  /*Unmarshall pup'd fields: const double *result, int n*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> n; n.t = ((CkReductionMsg*)impl_msg)->getLength() / sizeof(double);
  double* result; result = (double*)impl_buf;
  impl_obj->updateKSeeds(result, std::move(n.t));
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateSeedMembership(KSeedsMessage* impl_msg);
 */
void CProxyElement_KMeansBOC::updateSeedMembership(KSeedsMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_KMeansBOC::idx_updateSeedMembership_KSeedsMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_KMeansBOC::idx_updateSeedMembership_KSeedsMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_KMeansBOC::idx_updateSeedMembership_KSeedsMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void collectDistances(KSelectionMessage* impl_msg);
 */
void CProxyElement_KMeansBOC::collectDistances(KSelectionMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_KMeansBOC::idx_collectDistances_KSelectionMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_KMeansBOC::idx_collectDistances_KSelectionMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_KMeansBOC::idx_collectDistances_KSelectionMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void findNextMinMax(CkReductionMsg* impl_msg);
 */
void CProxyElement_KMeansBOC::findNextMinMax(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_KMeansBOC::idx_findNextMinMax_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_KMeansBOC::idx_findNextMinMax_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_KMeansBOC::idx_findNextMinMax_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
void CkIndex_KMeansBOC::_call_redn_wrapper_findNextMinMax_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  KMeansBOC* impl_obj = static_cast<KMeansBOC*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->findNextMinMax((CkReductionMsg*)impl_msg);
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void phaseDone();
 */
void CProxyElement_KMeansBOC::phaseDone(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_KMeansBOC::idx_phaseDone_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_KMeansBOC::idx_phaseDone_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_KMeansBOC::idx_phaseDone_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: KMeansBOC(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: KMeansBOC(const bool &impl_noname_0, int impl_noname_1, int impl_noname_2, double impl_noname_3, const bool &impl_noname_4);
 */
CkGroupID CProxy_KMeansBOC::ckNew(const bool &impl_noname_0, int impl_noname_1, int impl_noname_2, double impl_noname_3, const bool &impl_noname_4, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const bool &impl_noname_0, int impl_noname_1, int impl_noname_2, double impl_noname_3, const bool &impl_noname_4
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)impl_noname_0;
    implP|impl_noname_1;
    implP|impl_noname_2;
    implP|impl_noname_3;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)impl_noname_4;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)impl_noname_0;
    implP|impl_noname_1;
    implP|impl_noname_2;
    implP|impl_noname_3;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)impl_noname_4;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_KMeansBOC::__idx, CkIndex_KMeansBOC::idx_KMeansBOC_marshall1(), impl_msg);
  return gId;
}
  CProxy_KMeansBOC::CProxy_KMeansBOC(const bool &impl_noname_0, int impl_noname_1, int impl_noname_2, double impl_noname_3, const bool &impl_noname_4, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const bool &impl_noname_0, int impl_noname_1, int impl_noname_2, double impl_noname_3, const bool &impl_noname_4
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)impl_noname_0;
    implP|impl_noname_1;
    implP|impl_noname_2;
    implP|impl_noname_3;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)impl_noname_4;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)impl_noname_0;
    implP|impl_noname_1;
    implP|impl_noname_2;
    implP|impl_noname_3;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)impl_noname_4;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  ckSetGroupID(CkCreateGroup(CkIndex_KMeansBOC::__idx, CkIndex_KMeansBOC::idx_KMeansBOC_marshall1(), impl_msg));
}

// Entry point registration function
int CkIndex_KMeansBOC::reg_KMeansBOC_marshall1() {
  int epidx = CkRegisterEp("KMeansBOC(const bool &impl_noname_0, int impl_noname_1, int impl_noname_2, double impl_noname_3, const bool &impl_noname_4)",
      reinterpret_cast<CkCallFnPtr>(_call_KMeansBOC_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_KMeansBOC_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_KMeansBOC_marshall1);

  return epidx;
}

void CkIndex_KMeansBOC::_call_KMeansBOC_marshall1(void* impl_msg, void* impl_obj_void)
{
  KMeansBOC* impl_obj = static_cast<KMeansBOC*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const bool &impl_noname_0, int impl_noname_1, int impl_noname_2, double impl_noname_3, const bool &impl_noname_4*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<bool> impl_noname_0;
  implP|impl_noname_0;
  PUP::detail::TemporaryObjectHolder<int> impl_noname_1;
  implP|impl_noname_1;
  PUP::detail::TemporaryObjectHolder<int> impl_noname_2;
  implP|impl_noname_2;
  PUP::detail::TemporaryObjectHolder<double> impl_noname_3;
  implP|impl_noname_3;
  PUP::detail::TemporaryObjectHolder<bool> impl_noname_4;
  implP|impl_noname_4;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) KMeansBOC(std::move(impl_noname_0.t), std::move(impl_noname_1.t), std::move(impl_noname_2.t), std::move(impl_noname_3.t), std::move(impl_noname_4.t));
}
int CkIndex_KMeansBOC::_callmarshall_KMeansBOC_marshall1(char* impl_buf, void* impl_obj_void) {
  KMeansBOC* impl_obj = static_cast<KMeansBOC*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const bool &impl_noname_0, int impl_noname_1, int impl_noname_2, double impl_noname_3, const bool &impl_noname_4*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<bool> impl_noname_0;
  implP|impl_noname_0;
  PUP::detail::TemporaryObjectHolder<int> impl_noname_1;
  implP|impl_noname_1;
  PUP::detail::TemporaryObjectHolder<int> impl_noname_2;
  implP|impl_noname_2;
  PUP::detail::TemporaryObjectHolder<double> impl_noname_3;
  implP|impl_noname_3;
  PUP::detail::TemporaryObjectHolder<bool> impl_noname_4;
  implP|impl_noname_4;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) KMeansBOC(std::move(impl_noname_0.t), std::move(impl_noname_1.t), std::move(impl_noname_2.t), std::move(impl_noname_3.t), std::move(impl_noname_4.t));
  return implP.size();
}
void CkIndex_KMeansBOC::_marshallmessagepup_KMeansBOC_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const bool &impl_noname_0, int impl_noname_1, int impl_noname_2, double impl_noname_3, const bool &impl_noname_4*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<bool> impl_noname_0;
  implP|impl_noname_0;
  PUP::detail::TemporaryObjectHolder<int> impl_noname_1;
  implP|impl_noname_1;
  PUP::detail::TemporaryObjectHolder<int> impl_noname_2;
  implP|impl_noname_2;
  PUP::detail::TemporaryObjectHolder<double> impl_noname_3;
  implP|impl_noname_3;
  PUP::detail::TemporaryObjectHolder<bool> impl_noname_4;
  implP|impl_noname_4;
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
  if (implDestP.hasComments()) implDestP.comment("impl_noname_4");
  implDestP|impl_noname_4;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startKMeansAnalysis();
 */
void CProxy_KMeansBOC::startKMeansAnalysis(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_KMeansBOC::idx_startKMeansAnalysis_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_KMeansBOC::idx_startKMeansAnalysis_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_KMeansBOC::idx_startKMeansAnalysis_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_KMeansBOC::startKMeansAnalysis(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_KMeansBOC::idx_startKMeansAnalysis_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_KMeansBOC::startKMeansAnalysis(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_KMeansBOC::idx_startKMeansAnalysis_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_KMeansBOC::reg_startKMeansAnalysis_void() {
  int epidx = CkRegisterEp("startKMeansAnalysis()",
      reinterpret_cast<CkCallFnPtr>(_call_startKMeansAnalysis_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_KMeansBOC::_call_startKMeansAnalysis_void(void* impl_msg, void* impl_obj_void)
{
  KMeansBOC* impl_obj = static_cast<KMeansBOC*>(impl_obj_void);
  impl_obj->startKMeansAnalysis();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_KMeansBOC::startKMeansAnalysis_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void flushCheck(const bool &impl_noname_5);
 */
void CProxy_KMeansBOC::flushCheck(const bool &impl_noname_5, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const bool &impl_noname_5
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)impl_noname_5;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)impl_noname_5;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_KMeansBOC::idx_flushCheck_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_KMeansBOC::idx_flushCheck_marshall3(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_KMeansBOC::idx_flushCheck_marshall3(), impl_msg, ckGetGroupID(),0);
}
void CProxy_KMeansBOC::flushCheck(const bool &impl_noname_5, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const bool &impl_noname_5
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)impl_noname_5;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)impl_noname_5;
  }
  CkSendMsgBranchMulti(CkIndex_KMeansBOC::idx_flushCheck_marshall3(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_KMeansBOC::flushCheck(const bool &impl_noname_5, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const bool &impl_noname_5
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)impl_noname_5;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)impl_noname_5;
  }
  CkSendMsgBranchGroup(CkIndex_KMeansBOC::idx_flushCheck_marshall3(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_KMeansBOC::reg_flushCheck_marshall3() {
  int epidx = CkRegisterEp("flushCheck(const bool &impl_noname_5)",
      reinterpret_cast<CkCallFnPtr>(_call_flushCheck_marshall3), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_flushCheck_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_flushCheck_marshall3);

  return epidx;
}


// Redn wrapper registration function
int CkIndex_KMeansBOC::reg_redn_wrapper_flushCheck_marshall3() {
  return CkRegisterEp("redn_wrapper_flushCheck(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_flushCheck_marshall3), CkMarshallMsg::__idx, __idx, 0);
}

void CkIndex_KMeansBOC::_call_flushCheck_marshall3(void* impl_msg, void* impl_obj_void)
{
  KMeansBOC* impl_obj = static_cast<KMeansBOC*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const bool &impl_noname_5*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<bool> impl_noname_5;
  implP|impl_noname_5;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->flushCheck(std::move(impl_noname_5.t));
}
int CkIndex_KMeansBOC::_callmarshall_flushCheck_marshall3(char* impl_buf, void* impl_obj_void) {
  KMeansBOC* impl_obj = static_cast<KMeansBOC*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const bool &impl_noname_5*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<bool> impl_noname_5;
  implP|impl_noname_5;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->flushCheck(std::move(impl_noname_5.t));
  return implP.size();
}
void CkIndex_KMeansBOC::_marshallmessagepup_flushCheck_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const bool &impl_noname_5*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<bool> impl_noname_5;
  implP|impl_noname_5;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_5");
  implDestP|impl_noname_5;
}
PUPable_def(SINGLE_ARG(Closure_KMeansBOC::flushCheck_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void flushCheckDone();
 */
void CProxy_KMeansBOC::flushCheckDone(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_KMeansBOC::idx_flushCheckDone_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_KMeansBOC::idx_flushCheckDone_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_KMeansBOC::idx_flushCheckDone_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_KMeansBOC::flushCheckDone(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_KMeansBOC::idx_flushCheckDone_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_KMeansBOC::flushCheckDone(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_KMeansBOC::idx_flushCheckDone_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_KMeansBOC::reg_flushCheckDone_void() {
  int epidx = CkRegisterEp("flushCheckDone()",
      reinterpret_cast<CkCallFnPtr>(_call_flushCheckDone_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_KMeansBOC::_call_flushCheckDone_void(void* impl_msg, void* impl_obj_void)
{
  KMeansBOC* impl_obj = static_cast<KMeansBOC*>(impl_obj_void);
  impl_obj->flushCheckDone();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_KMeansBOC::flushCheckDone_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getNextPhaseMetrics();
 */
void CProxy_KMeansBOC::getNextPhaseMetrics(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_KMeansBOC::idx_getNextPhaseMetrics_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_KMeansBOC::idx_getNextPhaseMetrics_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_KMeansBOC::idx_getNextPhaseMetrics_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_KMeansBOC::getNextPhaseMetrics(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_KMeansBOC::idx_getNextPhaseMetrics_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_KMeansBOC::getNextPhaseMetrics(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_KMeansBOC::idx_getNextPhaseMetrics_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_KMeansBOC::reg_getNextPhaseMetrics_void() {
  int epidx = CkRegisterEp("getNextPhaseMetrics()",
      reinterpret_cast<CkCallFnPtr>(_call_getNextPhaseMetrics_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_KMeansBOC::_call_getNextPhaseMetrics_void(void* impl_msg, void* impl_obj_void)
{
  KMeansBOC* impl_obj = static_cast<KMeansBOC*>(impl_obj_void);
  impl_obj->getNextPhaseMetrics();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_KMeansBOC::getNextPhaseMetrics_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void globalMetricRefinement(CkReductionMsg* impl_msg);
 */
void CProxy_KMeansBOC::globalMetricRefinement(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_KMeansBOC::idx_globalMetricRefinement_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_KMeansBOC::idx_globalMetricRefinement_CkReductionMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_KMeansBOC::idx_globalMetricRefinement_CkReductionMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_KMeansBOC::globalMetricRefinement(CkReductionMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_KMeansBOC::idx_globalMetricRefinement_CkReductionMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_KMeansBOC::globalMetricRefinement(CkReductionMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_KMeansBOC::idx_globalMetricRefinement_CkReductionMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_KMeansBOC::reg_globalMetricRefinement_CkReductionMsg() {
  int epidx = CkRegisterEp("globalMetricRefinement(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_globalMetricRefinement_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_KMeansBOC::reg_redn_wrapper_globalMetricRefinement_CkReductionMsg() {
  return CkRegisterEp("redn_wrapper_globalMetricRefinement(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_globalMetricRefinement_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_KMeansBOC::_call_globalMetricRefinement_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  KMeansBOC* impl_obj = static_cast<KMeansBOC*>(impl_obj_void);
  impl_obj->globalMetricRefinement((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void findInitialClusters(KMeansStatsMessage* impl_msg);
 */
void CProxy_KMeansBOC::findInitialClusters(KMeansStatsMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_KMeansBOC::idx_findInitialClusters_KMeansStatsMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_KMeansBOC::idx_findInitialClusters_KMeansStatsMessage(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_KMeansBOC::idx_findInitialClusters_KMeansStatsMessage(), impl_msg, ckGetGroupID(),0);
}
void CProxy_KMeansBOC::findInitialClusters(KMeansStatsMessage* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_KMeansBOC::idx_findInitialClusters_KMeansStatsMessage(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_KMeansBOC::findInitialClusters(KMeansStatsMessage* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_KMeansBOC::idx_findInitialClusters_KMeansStatsMessage(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_KMeansBOC::reg_findInitialClusters_KMeansStatsMessage() {
  int epidx = CkRegisterEp("findInitialClusters(KMeansStatsMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_findInitialClusters_KMeansStatsMessage), CMessage_KMeansStatsMessage::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)KMeansStatsMessage::ckDebugPup);
  return epidx;
}

void CkIndex_KMeansBOC::_call_findInitialClusters_KMeansStatsMessage(void* impl_msg, void* impl_obj_void)
{
  KMeansBOC* impl_obj = static_cast<KMeansBOC*>(impl_obj_void);
  impl_obj->findInitialClusters((KMeansStatsMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateKSeeds(const double *result, int n);
 */
void CProxy_KMeansBOC::updateKSeeds(const double *result, int n, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const double *result, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_result, impl_cnt_result;
  impl_off_result=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_result=sizeof(double)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_result;
    implP|impl_cnt_result;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_result;
    implP|impl_cnt_result;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_result,result,impl_cnt_result);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_KMeansBOC::idx_updateKSeeds_marshall8(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_KMeansBOC::idx_updateKSeeds_marshall8(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_KMeansBOC::idx_updateKSeeds_marshall8(), impl_msg, ckGetGroupID(),0);
}
void CProxy_KMeansBOC::updateKSeeds(const double *result, int n, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const double *result, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_result, impl_cnt_result;
  impl_off_result=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_result=sizeof(double)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_result;
    implP|impl_cnt_result;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_result;
    implP|impl_cnt_result;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_result,result,impl_cnt_result);
  CkSendMsgBranchMulti(CkIndex_KMeansBOC::idx_updateKSeeds_marshall8(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_KMeansBOC::updateKSeeds(const double *result, int n, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const double *result, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_result, impl_cnt_result;
  impl_off_result=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_result=sizeof(double)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_result;
    implP|impl_cnt_result;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_result;
    implP|impl_cnt_result;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_result,result,impl_cnt_result);
  CkSendMsgBranchGroup(CkIndex_KMeansBOC::idx_updateKSeeds_marshall8(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_KMeansBOC::reg_updateKSeeds_marshall8() {
  int epidx = CkRegisterEp("updateKSeeds(const double *result, int n)",
      reinterpret_cast<CkCallFnPtr>(_call_updateKSeeds_marshall8), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_updateKSeeds_marshall8);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_updateKSeeds_marshall8);

  return epidx;
}


// Redn wrapper registration function
int CkIndex_KMeansBOC::reg_redn_wrapper_updateKSeeds_marshall8() {
  return CkRegisterEp("redn_wrapper_updateKSeeds(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_updateKSeeds_marshall8), CkMarshallMsg::__idx, __idx, 0);
}

void CkIndex_KMeansBOC::_call_updateKSeeds_marshall8(void* impl_msg, void* impl_obj_void)
{
  KMeansBOC* impl_obj = static_cast<KMeansBOC*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const double *result, int n*/
  PUP::fromMem implP(impl_buf);
  int impl_off_result, impl_cnt_result;
  implP|impl_off_result;
  implP|impl_cnt_result;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *result=(double *)(impl_buf+impl_off_result);
  impl_obj->updateKSeeds(result, std::move(n.t));
}
int CkIndex_KMeansBOC::_callmarshall_updateKSeeds_marshall8(char* impl_buf, void* impl_obj_void) {
  KMeansBOC* impl_obj = static_cast<KMeansBOC*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const double *result, int n*/
  PUP::fromMem implP(impl_buf);
  int impl_off_result, impl_cnt_result;
  implP|impl_off_result;
  implP|impl_cnt_result;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *result=(double *)(impl_buf+impl_off_result);
  impl_obj->updateKSeeds(result, std::move(n.t));
  return implP.size();
}
void CkIndex_KMeansBOC::_marshallmessagepup_updateKSeeds_marshall8(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const double *result, int n*/
  PUP::fromMem implP(impl_buf);
  int impl_off_result, impl_cnt_result;
  implP|impl_off_result;
  implP|impl_cnt_result;
  PUP::detail::TemporaryObjectHolder<int> n;
  implP|n;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  double *result=(double *)(impl_buf+impl_off_result);
  if (implDestP.hasComments()) implDestP.comment("result");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*result))<impl_cnt_result;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|result[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("n");
  implDestP|n;
}
PUPable_def(SINGLE_ARG(Closure_KMeansBOC::updateKSeeds_8_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateSeedMembership(KSeedsMessage* impl_msg);
 */
void CProxy_KMeansBOC::updateSeedMembership(KSeedsMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_KMeansBOC::idx_updateSeedMembership_KSeedsMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_KMeansBOC::idx_updateSeedMembership_KSeedsMessage(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_KMeansBOC::idx_updateSeedMembership_KSeedsMessage(), impl_msg, ckGetGroupID(),0);
}
void CProxy_KMeansBOC::updateSeedMembership(KSeedsMessage* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_KMeansBOC::idx_updateSeedMembership_KSeedsMessage(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_KMeansBOC::updateSeedMembership(KSeedsMessage* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_KMeansBOC::idx_updateSeedMembership_KSeedsMessage(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_KMeansBOC::reg_updateSeedMembership_KSeedsMessage() {
  int epidx = CkRegisterEp("updateSeedMembership(KSeedsMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_updateSeedMembership_KSeedsMessage), CMessage_KSeedsMessage::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)KSeedsMessage::ckDebugPup);
  return epidx;
}

void CkIndex_KMeansBOC::_call_updateSeedMembership_KSeedsMessage(void* impl_msg, void* impl_obj_void)
{
  KMeansBOC* impl_obj = static_cast<KMeansBOC*>(impl_obj_void);
  impl_obj->updateSeedMembership((KSeedsMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void collectDistances(KSelectionMessage* impl_msg);
 */
void CProxy_KMeansBOC::collectDistances(KSelectionMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_KMeansBOC::idx_collectDistances_KSelectionMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_KMeansBOC::idx_collectDistances_KSelectionMessage(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_KMeansBOC::idx_collectDistances_KSelectionMessage(), impl_msg, ckGetGroupID(),0);
}
void CProxy_KMeansBOC::collectDistances(KSelectionMessage* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_KMeansBOC::idx_collectDistances_KSelectionMessage(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_KMeansBOC::collectDistances(KSelectionMessage* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_KMeansBOC::idx_collectDistances_KSelectionMessage(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_KMeansBOC::reg_collectDistances_KSelectionMessage() {
  int epidx = CkRegisterEp("collectDistances(KSelectionMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_collectDistances_KSelectionMessage), CMessage_KSelectionMessage::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)KSelectionMessage::ckDebugPup);
  return epidx;
}

void CkIndex_KMeansBOC::_call_collectDistances_KSelectionMessage(void* impl_msg, void* impl_obj_void)
{
  KMeansBOC* impl_obj = static_cast<KMeansBOC*>(impl_obj_void);
  impl_obj->collectDistances((KSelectionMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void findNextMinMax(CkReductionMsg* impl_msg);
 */
void CProxy_KMeansBOC::findNextMinMax(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_KMeansBOC::idx_findNextMinMax_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_KMeansBOC::idx_findNextMinMax_CkReductionMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_KMeansBOC::idx_findNextMinMax_CkReductionMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_KMeansBOC::findNextMinMax(CkReductionMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_KMeansBOC::idx_findNextMinMax_CkReductionMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_KMeansBOC::findNextMinMax(CkReductionMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_KMeansBOC::idx_findNextMinMax_CkReductionMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_KMeansBOC::reg_findNextMinMax_CkReductionMsg() {
  int epidx = CkRegisterEp("findNextMinMax(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_findNextMinMax_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_KMeansBOC::reg_redn_wrapper_findNextMinMax_CkReductionMsg() {
  return CkRegisterEp("redn_wrapper_findNextMinMax(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_findNextMinMax_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_KMeansBOC::_call_findNextMinMax_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  KMeansBOC* impl_obj = static_cast<KMeansBOC*>(impl_obj_void);
  impl_obj->findNextMinMax((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void phaseDone();
 */
void CProxy_KMeansBOC::phaseDone(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_KMeansBOC::idx_phaseDone_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_KMeansBOC::idx_phaseDone_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_KMeansBOC::idx_phaseDone_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_KMeansBOC::phaseDone(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_KMeansBOC::idx_phaseDone_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_KMeansBOC::phaseDone(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_KMeansBOC::idx_phaseDone_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_KMeansBOC::reg_phaseDone_void() {
  int epidx = CkRegisterEp("phaseDone()",
      reinterpret_cast<CkCallFnPtr>(_call_phaseDone_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_KMeansBOC::_call_phaseDone_void(void* impl_msg, void* impl_obj_void)
{
  KMeansBOC* impl_obj = static_cast<KMeansBOC*>(impl_obj_void);
  impl_obj->phaseDone();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_KMeansBOC::phaseDone_12_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: KMeansBOC(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_KMeansBOC::reg_KMeansBOC_CkMigrateMessage() {
  int epidx = CkRegisterEp("KMeansBOC(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_KMeansBOC_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_KMeansBOC::_call_KMeansBOC_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) KMeansBOC((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: KMeansBOC(const bool &impl_noname_0, int impl_noname_1, int impl_noname_2, double impl_noname_3, const bool &impl_noname_4);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startKMeansAnalysis();
 */
void CProxySection_KMeansBOC::startKMeansAnalysis(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_KMeansBOC::idx_startKMeansAnalysis_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_KMeansBOC::idx_startKMeansAnalysis_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void flushCheck(const bool &impl_noname_5);
 */
void CProxySection_KMeansBOC::flushCheck(const bool &impl_noname_5, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const bool &impl_noname_5
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)impl_noname_5;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)impl_noname_5;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_KMeansBOC::idx_flushCheck_marshall3(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_KMeansBOC::idx_flushCheck_marshall3(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void flushCheckDone();
 */
void CProxySection_KMeansBOC::flushCheckDone(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_KMeansBOC::idx_flushCheckDone_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_KMeansBOC::idx_flushCheckDone_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getNextPhaseMetrics();
 */
void CProxySection_KMeansBOC::getNextPhaseMetrics(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_KMeansBOC::idx_getNextPhaseMetrics_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_KMeansBOC::idx_getNextPhaseMetrics_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void globalMetricRefinement(CkReductionMsg* impl_msg);
 */
void CProxySection_KMeansBOC::globalMetricRefinement(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_KMeansBOC::idx_globalMetricRefinement_CkReductionMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_KMeansBOC::idx_globalMetricRefinement_CkReductionMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void findInitialClusters(KMeansStatsMessage* impl_msg);
 */
void CProxySection_KMeansBOC::findInitialClusters(KMeansStatsMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_KMeansBOC::idx_findInitialClusters_KMeansStatsMessage(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_KMeansBOC::idx_findInitialClusters_KMeansStatsMessage(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateKSeeds(const double *result, int n);
 */
void CProxySection_KMeansBOC::updateKSeeds(const double *result, int n, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const double *result, int n
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_result, impl_cnt_result;
  impl_off_result=impl_off=CK_ALIGN(impl_off,sizeof(double));
  impl_off+=(impl_cnt_result=sizeof(double)*(n));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_result;
    implP|impl_cnt_result;
    implP|n;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_result;
    implP|impl_cnt_result;
    implP|n;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_result,result,impl_cnt_result);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_KMeansBOC::idx_updateKSeeds_marshall8(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_KMeansBOC::idx_updateKSeeds_marshall8(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void updateSeedMembership(KSeedsMessage* impl_msg);
 */
void CProxySection_KMeansBOC::updateSeedMembership(KSeedsMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_KMeansBOC::idx_updateSeedMembership_KSeedsMessage(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_KMeansBOC::idx_updateSeedMembership_KSeedsMessage(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void collectDistances(KSelectionMessage* impl_msg);
 */
void CProxySection_KMeansBOC::collectDistances(KSelectionMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_KMeansBOC::idx_collectDistances_KSelectionMessage(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_KMeansBOC::idx_collectDistances_KSelectionMessage(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void findNextMinMax(CkReductionMsg* impl_msg);
 */
void CProxySection_KMeansBOC::findNextMinMax(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_KMeansBOC::idx_findNextMinMax_CkReductionMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_KMeansBOC::idx_findNextMinMax_CkReductionMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void phaseDone();
 */
void CProxySection_KMeansBOC::phaseDone(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_KMeansBOC::idx_phaseDone_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_KMeansBOC::idx_phaseDone_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: KMeansBOC(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_KMeansBOC::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,KMeansBOC::isIrreducible());
  // REG: KMeansBOC(const bool &impl_noname_0, int impl_noname_1, int impl_noname_2, double impl_noname_3, const bool &impl_noname_4);
  idx_KMeansBOC_marshall1();

  // REG: void startKMeansAnalysis();
  idx_startKMeansAnalysis_void();

  // REG: void flushCheck(const bool &impl_noname_5);
  idx_flushCheck_marshall3();
  idx_redn_wrapper_flushCheck_marshall3();

  // REG: void flushCheckDone();
  idx_flushCheckDone_void();

  // REG: void getNextPhaseMetrics();
  idx_getNextPhaseMetrics_void();

  // REG: void globalMetricRefinement(CkReductionMsg* impl_msg);
  idx_globalMetricRefinement_CkReductionMsg();
  idx_redn_wrapper_globalMetricRefinement_CkReductionMsg();

  // REG: void findInitialClusters(KMeansStatsMessage* impl_msg);
  idx_findInitialClusters_KMeansStatsMessage();

  // REG: void updateKSeeds(const double *result, int n);
  idx_updateKSeeds_marshall8();
  idx_redn_wrapper_updateKSeeds_marshall8();

  // REG: void updateSeedMembership(KSeedsMessage* impl_msg);
  idx_updateSeedMembership_KSeedsMessage();

  // REG: void collectDistances(KSelectionMessage* impl_msg);
  idx_collectDistances_KSelectionMessage();

  // REG: void findNextMinMax(CkReductionMsg* impl_msg);
  idx_findNextMinMax_CkReductionMsg();
  idx_redn_wrapper_findNextMinMax_CkReductionMsg();

  // REG: void phaseDone();
  idx_phaseDone_void();

  // REG: KMeansBOC(CkMigrateMessage* impl_msg);
  idx_KMeansBOC_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_KMeansBOC_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group TraceProjectionsBOC: IrrGroup{
TraceProjectionsBOC(const bool &impl_noname_6, const bool &impl_noname_7);
void traceProjectionsParallelShutdown(int impl_noname_8);
void startTimeAnalysis();
void startTimeDone(double impl_noname_9);
void startEndTimeAnalysis();
void endTimeDone(double impl_noname_a);
void kMeansDone();
void kMeansDoneFlushed();
void finalize();
void closingTraces();
void closeParallelShutdown();
void flush_warning(int pe);
TraceProjectionsBOC(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_TraceProjectionsBOC::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceProjectionsBOC(const bool &impl_noname_6, const bool &impl_noname_7);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void traceProjectionsParallelShutdown(int impl_noname_8);
 */
void CProxyElement_TraceProjectionsBOC::traceProjectionsParallelShutdown(int impl_noname_8, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_8
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_8;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_8;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceProjectionsBOC::idx_traceProjectionsParallelShutdown_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceProjectionsBOC::idx_traceProjectionsParallelShutdown_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceProjectionsBOC::idx_traceProjectionsParallelShutdown_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startTimeAnalysis();
 */
void CProxyElement_TraceProjectionsBOC::startTimeAnalysis(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceProjectionsBOC::idx_startTimeAnalysis_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceProjectionsBOC::idx_startTimeAnalysis_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceProjectionsBOC::idx_startTimeAnalysis_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startTimeDone(double impl_noname_9);
 */
void CProxyElement_TraceProjectionsBOC::startTimeDone(double impl_noname_9, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double impl_noname_9
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_9;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_9;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceProjectionsBOC::idx_startTimeDone_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceProjectionsBOC::idx_startTimeDone_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceProjectionsBOC::idx_startTimeDone_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
void CkIndex_TraceProjectionsBOC::_call_redn_wrapper_startTimeDone_marshall4(void* impl_msg, void* impl_obj_void)
{
  TraceProjectionsBOC* impl_obj = static_cast<TraceProjectionsBOC*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  /*Unmarshall pup'd fields: double impl_noname_9*/
  PUP::fromMem implP(impl_buf);
  /* non two-param case */
  PUP::detail::TemporaryObjectHolder<double> impl_noname_9;
  implP|impl_noname_9;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->startTimeDone(std::move(impl_noname_9.t));
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startEndTimeAnalysis();
 */
void CProxyElement_TraceProjectionsBOC::startEndTimeAnalysis(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceProjectionsBOC::idx_startEndTimeAnalysis_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceProjectionsBOC::idx_startEndTimeAnalysis_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceProjectionsBOC::idx_startEndTimeAnalysis_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void endTimeDone(double impl_noname_a);
 */
void CProxyElement_TraceProjectionsBOC::endTimeDone(double impl_noname_a, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double impl_noname_a
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_a;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_a;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceProjectionsBOC::idx_endTimeDone_marshall6(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceProjectionsBOC::idx_endTimeDone_marshall6(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceProjectionsBOC::idx_endTimeDone_marshall6(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
void CkIndex_TraceProjectionsBOC::_call_redn_wrapper_endTimeDone_marshall6(void* impl_msg, void* impl_obj_void)
{
  TraceProjectionsBOC* impl_obj = static_cast<TraceProjectionsBOC*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  /*Unmarshall pup'd fields: double impl_noname_a*/
  PUP::fromMem implP(impl_buf);
  /* non two-param case */
  PUP::detail::TemporaryObjectHolder<double> impl_noname_a;
  implP|impl_noname_a;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->endTimeDone(std::move(impl_noname_a.t));
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void kMeansDone();
 */
void CProxyElement_TraceProjectionsBOC::kMeansDone(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceProjectionsBOC::idx_kMeansDone_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceProjectionsBOC::idx_kMeansDone_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceProjectionsBOC::idx_kMeansDone_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
void CkIndex_TraceProjectionsBOC::_call_redn_wrapper_kMeansDone_void(void* impl_msg, void* impl_obj_void)
{
  TraceProjectionsBOC* impl_obj = static_cast<TraceProjectionsBOC*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->kMeansDone();
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void kMeansDoneFlushed();
 */
void CProxyElement_TraceProjectionsBOC::kMeansDoneFlushed(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceProjectionsBOC::idx_kMeansDoneFlushed_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceProjectionsBOC::idx_kMeansDoneFlushed_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceProjectionsBOC::idx_kMeansDoneFlushed_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finalize();
 */
void CProxyElement_TraceProjectionsBOC::finalize(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceProjectionsBOC::idx_finalize_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceProjectionsBOC::idx_finalize_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceProjectionsBOC::idx_finalize_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void closingTraces();
 */
void CProxyElement_TraceProjectionsBOC::closingTraces(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceProjectionsBOC::idx_closingTraces_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceProjectionsBOC::idx_closingTraces_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceProjectionsBOC::idx_closingTraces_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void closeParallelShutdown();
 */
void CProxyElement_TraceProjectionsBOC::closeParallelShutdown(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceProjectionsBOC::idx_closeParallelShutdown_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceProjectionsBOC::idx_closeParallelShutdown_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceProjectionsBOC::idx_closeParallelShutdown_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
void CkIndex_TraceProjectionsBOC::_call_redn_wrapper_closeParallelShutdown_void(void* impl_msg, void* impl_obj_void)
{
  TraceProjectionsBOC* impl_obj = static_cast<TraceProjectionsBOC*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->closeParallelShutdown();
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void flush_warning(int pe);
 */
void CProxyElement_TraceProjectionsBOC::flush_warning(int pe, const CkEntryOptions *impl_e_opts)
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
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceProjectionsBOC::idx_flush_warning_marshall12(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_TraceProjectionsBOC::idx_flush_warning_marshall12(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_TraceProjectionsBOC::idx_flush_warning_marshall12(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceProjectionsBOC(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceProjectionsBOC(const bool &impl_noname_6, const bool &impl_noname_7);
 */
CkGroupID CProxy_TraceProjectionsBOC::ckNew(const bool &impl_noname_6, const bool &impl_noname_7, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const bool &impl_noname_6, const bool &impl_noname_7
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)impl_noname_6;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)impl_noname_7;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)impl_noname_6;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)impl_noname_7;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_TraceProjectionsBOC::__idx, CkIndex_TraceProjectionsBOC::idx_TraceProjectionsBOC_marshall1(), impl_msg);
  return gId;
}
  CProxy_TraceProjectionsBOC::CProxy_TraceProjectionsBOC(const bool &impl_noname_6, const bool &impl_noname_7, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const bool &impl_noname_6, const bool &impl_noname_7
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)impl_noname_6;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)impl_noname_7;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)impl_noname_6;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)impl_noname_7;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  ckSetGroupID(CkCreateGroup(CkIndex_TraceProjectionsBOC::__idx, CkIndex_TraceProjectionsBOC::idx_TraceProjectionsBOC_marshall1(), impl_msg));
}

// Entry point registration function
int CkIndex_TraceProjectionsBOC::reg_TraceProjectionsBOC_marshall1() {
  int epidx = CkRegisterEp("TraceProjectionsBOC(const bool &impl_noname_6, const bool &impl_noname_7)",
      reinterpret_cast<CkCallFnPtr>(_call_TraceProjectionsBOC_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_TraceProjectionsBOC_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_TraceProjectionsBOC_marshall1);

  return epidx;
}

void CkIndex_TraceProjectionsBOC::_call_TraceProjectionsBOC_marshall1(void* impl_msg, void* impl_obj_void)
{
  TraceProjectionsBOC* impl_obj = static_cast<TraceProjectionsBOC*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const bool &impl_noname_6, const bool &impl_noname_7*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<bool> impl_noname_6;
  implP|impl_noname_6;
  PUP::detail::TemporaryObjectHolder<bool> impl_noname_7;
  implP|impl_noname_7;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) TraceProjectionsBOC(std::move(impl_noname_6.t), std::move(impl_noname_7.t));
}
int CkIndex_TraceProjectionsBOC::_callmarshall_TraceProjectionsBOC_marshall1(char* impl_buf, void* impl_obj_void) {
  TraceProjectionsBOC* impl_obj = static_cast<TraceProjectionsBOC*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const bool &impl_noname_6, const bool &impl_noname_7*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<bool> impl_noname_6;
  implP|impl_noname_6;
  PUP::detail::TemporaryObjectHolder<bool> impl_noname_7;
  implP|impl_noname_7;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) TraceProjectionsBOC(std::move(impl_noname_6.t), std::move(impl_noname_7.t));
  return implP.size();
}
void CkIndex_TraceProjectionsBOC::_marshallmessagepup_TraceProjectionsBOC_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const bool &impl_noname_6, const bool &impl_noname_7*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<bool> impl_noname_6;
  implP|impl_noname_6;
  PUP::detail::TemporaryObjectHolder<bool> impl_noname_7;
  implP|impl_noname_7;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_6");
  implDestP|impl_noname_6;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_7");
  implDestP|impl_noname_7;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void traceProjectionsParallelShutdown(int impl_noname_8);
 */
void CProxy_TraceProjectionsBOC::traceProjectionsParallelShutdown(int impl_noname_8, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_8
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_8;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_8;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceProjectionsBOC::idx_traceProjectionsParallelShutdown_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceProjectionsBOC::idx_traceProjectionsParallelShutdown_marshall2(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceProjectionsBOC::idx_traceProjectionsParallelShutdown_marshall2(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TraceProjectionsBOC::traceProjectionsParallelShutdown(int impl_noname_8, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_8
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_8;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_8;
  }
  CkSendMsgBranchMulti(CkIndex_TraceProjectionsBOC::idx_traceProjectionsParallelShutdown_marshall2(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TraceProjectionsBOC::traceProjectionsParallelShutdown(int impl_noname_8, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_8
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_8;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_8;
  }
  CkSendMsgBranchGroup(CkIndex_TraceProjectionsBOC::idx_traceProjectionsParallelShutdown_marshall2(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TraceProjectionsBOC::reg_traceProjectionsParallelShutdown_marshall2() {
  int epidx = CkRegisterEp("traceProjectionsParallelShutdown(int impl_noname_8)",
      reinterpret_cast<CkCallFnPtr>(_call_traceProjectionsParallelShutdown_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_traceProjectionsParallelShutdown_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_traceProjectionsParallelShutdown_marshall2);

  return epidx;
}

void CkIndex_TraceProjectionsBOC::_call_traceProjectionsParallelShutdown_marshall2(void* impl_msg, void* impl_obj_void)
{
  TraceProjectionsBOC* impl_obj = static_cast<TraceProjectionsBOC*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_8*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_8;
  implP|impl_noname_8;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->traceProjectionsParallelShutdown(std::move(impl_noname_8.t));
}
int CkIndex_TraceProjectionsBOC::_callmarshall_traceProjectionsParallelShutdown_marshall2(char* impl_buf, void* impl_obj_void) {
  TraceProjectionsBOC* impl_obj = static_cast<TraceProjectionsBOC*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int impl_noname_8*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_8;
  implP|impl_noname_8;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->traceProjectionsParallelShutdown(std::move(impl_noname_8.t));
  return implP.size();
}
void CkIndex_TraceProjectionsBOC::_marshallmessagepup_traceProjectionsParallelShutdown_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_8*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_8;
  implP|impl_noname_8;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_8");
  implDestP|impl_noname_8;
}
PUPable_def(SINGLE_ARG(Closure_TraceProjectionsBOC::traceProjectionsParallelShutdown_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startTimeAnalysis();
 */
void CProxy_TraceProjectionsBOC::startTimeAnalysis(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceProjectionsBOC::idx_startTimeAnalysis_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceProjectionsBOC::idx_startTimeAnalysis_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceProjectionsBOC::idx_startTimeAnalysis_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TraceProjectionsBOC::startTimeAnalysis(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_TraceProjectionsBOC::idx_startTimeAnalysis_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TraceProjectionsBOC::startTimeAnalysis(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_TraceProjectionsBOC::idx_startTimeAnalysis_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TraceProjectionsBOC::reg_startTimeAnalysis_void() {
  int epidx = CkRegisterEp("startTimeAnalysis()",
      reinterpret_cast<CkCallFnPtr>(_call_startTimeAnalysis_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_TraceProjectionsBOC::_call_startTimeAnalysis_void(void* impl_msg, void* impl_obj_void)
{
  TraceProjectionsBOC* impl_obj = static_cast<TraceProjectionsBOC*>(impl_obj_void);
  impl_obj->startTimeAnalysis();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_TraceProjectionsBOC::startTimeAnalysis_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startTimeDone(double impl_noname_9);
 */
void CProxy_TraceProjectionsBOC::startTimeDone(double impl_noname_9, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double impl_noname_9
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_9;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_9;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceProjectionsBOC::idx_startTimeDone_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceProjectionsBOC::idx_startTimeDone_marshall4(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceProjectionsBOC::idx_startTimeDone_marshall4(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TraceProjectionsBOC::startTimeDone(double impl_noname_9, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: double impl_noname_9
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_9;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_9;
  }
  CkSendMsgBranchMulti(CkIndex_TraceProjectionsBOC::idx_startTimeDone_marshall4(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TraceProjectionsBOC::startTimeDone(double impl_noname_9, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: double impl_noname_9
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_9;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_9;
  }
  CkSendMsgBranchGroup(CkIndex_TraceProjectionsBOC::idx_startTimeDone_marshall4(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TraceProjectionsBOC::reg_startTimeDone_marshall4() {
  int epidx = CkRegisterEp("startTimeDone(double impl_noname_9)",
      reinterpret_cast<CkCallFnPtr>(_call_startTimeDone_marshall4), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_startTimeDone_marshall4);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_startTimeDone_marshall4);

  return epidx;
}


// Redn wrapper registration function
int CkIndex_TraceProjectionsBOC::reg_redn_wrapper_startTimeDone_marshall4() {
  return CkRegisterEp("redn_wrapper_startTimeDone(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_startTimeDone_marshall4), CkMarshallMsg::__idx, __idx, 0);
}

void CkIndex_TraceProjectionsBOC::_call_startTimeDone_marshall4(void* impl_msg, void* impl_obj_void)
{
  TraceProjectionsBOC* impl_obj = static_cast<TraceProjectionsBOC*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: double impl_noname_9*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> impl_noname_9;
  implP|impl_noname_9;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->startTimeDone(std::move(impl_noname_9.t));
}
int CkIndex_TraceProjectionsBOC::_callmarshall_startTimeDone_marshall4(char* impl_buf, void* impl_obj_void) {
  TraceProjectionsBOC* impl_obj = static_cast<TraceProjectionsBOC*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: double impl_noname_9*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> impl_noname_9;
  implP|impl_noname_9;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->startTimeDone(std::move(impl_noname_9.t));
  return implP.size();
}
void CkIndex_TraceProjectionsBOC::_marshallmessagepup_startTimeDone_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: double impl_noname_9*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> impl_noname_9;
  implP|impl_noname_9;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_9");
  implDestP|impl_noname_9;
}
PUPable_def(SINGLE_ARG(Closure_TraceProjectionsBOC::startTimeDone_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startEndTimeAnalysis();
 */
void CProxy_TraceProjectionsBOC::startEndTimeAnalysis(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceProjectionsBOC::idx_startEndTimeAnalysis_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceProjectionsBOC::idx_startEndTimeAnalysis_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceProjectionsBOC::idx_startEndTimeAnalysis_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TraceProjectionsBOC::startEndTimeAnalysis(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_TraceProjectionsBOC::idx_startEndTimeAnalysis_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TraceProjectionsBOC::startEndTimeAnalysis(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_TraceProjectionsBOC::idx_startEndTimeAnalysis_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TraceProjectionsBOC::reg_startEndTimeAnalysis_void() {
  int epidx = CkRegisterEp("startEndTimeAnalysis()",
      reinterpret_cast<CkCallFnPtr>(_call_startEndTimeAnalysis_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_TraceProjectionsBOC::_call_startEndTimeAnalysis_void(void* impl_msg, void* impl_obj_void)
{
  TraceProjectionsBOC* impl_obj = static_cast<TraceProjectionsBOC*>(impl_obj_void);
  impl_obj->startEndTimeAnalysis();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_TraceProjectionsBOC::startEndTimeAnalysis_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void endTimeDone(double impl_noname_a);
 */
void CProxy_TraceProjectionsBOC::endTimeDone(double impl_noname_a, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double impl_noname_a
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_a;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_a;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceProjectionsBOC::idx_endTimeDone_marshall6(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceProjectionsBOC::idx_endTimeDone_marshall6(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceProjectionsBOC::idx_endTimeDone_marshall6(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TraceProjectionsBOC::endTimeDone(double impl_noname_a, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: double impl_noname_a
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_a;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_a;
  }
  CkSendMsgBranchMulti(CkIndex_TraceProjectionsBOC::idx_endTimeDone_marshall6(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TraceProjectionsBOC::endTimeDone(double impl_noname_a, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: double impl_noname_a
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_a;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_a;
  }
  CkSendMsgBranchGroup(CkIndex_TraceProjectionsBOC::idx_endTimeDone_marshall6(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TraceProjectionsBOC::reg_endTimeDone_marshall6() {
  int epidx = CkRegisterEp("endTimeDone(double impl_noname_a)",
      reinterpret_cast<CkCallFnPtr>(_call_endTimeDone_marshall6), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_endTimeDone_marshall6);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_endTimeDone_marshall6);

  return epidx;
}


// Redn wrapper registration function
int CkIndex_TraceProjectionsBOC::reg_redn_wrapper_endTimeDone_marshall6() {
  return CkRegisterEp("redn_wrapper_endTimeDone(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_endTimeDone_marshall6), CkMarshallMsg::__idx, __idx, 0);
}

void CkIndex_TraceProjectionsBOC::_call_endTimeDone_marshall6(void* impl_msg, void* impl_obj_void)
{
  TraceProjectionsBOC* impl_obj = static_cast<TraceProjectionsBOC*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: double impl_noname_a*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> impl_noname_a;
  implP|impl_noname_a;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->endTimeDone(std::move(impl_noname_a.t));
}
int CkIndex_TraceProjectionsBOC::_callmarshall_endTimeDone_marshall6(char* impl_buf, void* impl_obj_void) {
  TraceProjectionsBOC* impl_obj = static_cast<TraceProjectionsBOC*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: double impl_noname_a*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> impl_noname_a;
  implP|impl_noname_a;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->endTimeDone(std::move(impl_noname_a.t));
  return implP.size();
}
void CkIndex_TraceProjectionsBOC::_marshallmessagepup_endTimeDone_marshall6(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: double impl_noname_a*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> impl_noname_a;
  implP|impl_noname_a;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_a");
  implDestP|impl_noname_a;
}
PUPable_def(SINGLE_ARG(Closure_TraceProjectionsBOC::endTimeDone_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void kMeansDone();
 */
void CProxy_TraceProjectionsBOC::kMeansDone(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceProjectionsBOC::idx_kMeansDone_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceProjectionsBOC::idx_kMeansDone_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceProjectionsBOC::idx_kMeansDone_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TraceProjectionsBOC::kMeansDone(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_TraceProjectionsBOC::idx_kMeansDone_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TraceProjectionsBOC::kMeansDone(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_TraceProjectionsBOC::idx_kMeansDone_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TraceProjectionsBOC::reg_kMeansDone_void() {
  int epidx = CkRegisterEp("kMeansDone()",
      reinterpret_cast<CkCallFnPtr>(_call_kMeansDone_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_TraceProjectionsBOC::reg_redn_wrapper_kMeansDone_void() {
  return CkRegisterEp("redn_wrapper_kMeansDone(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_kMeansDone_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_TraceProjectionsBOC::_call_kMeansDone_void(void* impl_msg, void* impl_obj_void)
{
  TraceProjectionsBOC* impl_obj = static_cast<TraceProjectionsBOC*>(impl_obj_void);
  impl_obj->kMeansDone();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_TraceProjectionsBOC::kMeansDone_7_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void kMeansDoneFlushed();
 */
void CProxy_TraceProjectionsBOC::kMeansDoneFlushed(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceProjectionsBOC::idx_kMeansDoneFlushed_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceProjectionsBOC::idx_kMeansDoneFlushed_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceProjectionsBOC::idx_kMeansDoneFlushed_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TraceProjectionsBOC::kMeansDoneFlushed(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_TraceProjectionsBOC::idx_kMeansDoneFlushed_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TraceProjectionsBOC::kMeansDoneFlushed(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_TraceProjectionsBOC::idx_kMeansDoneFlushed_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TraceProjectionsBOC::reg_kMeansDoneFlushed_void() {
  int epidx = CkRegisterEp("kMeansDoneFlushed()",
      reinterpret_cast<CkCallFnPtr>(_call_kMeansDoneFlushed_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_TraceProjectionsBOC::_call_kMeansDoneFlushed_void(void* impl_msg, void* impl_obj_void)
{
  TraceProjectionsBOC* impl_obj = static_cast<TraceProjectionsBOC*>(impl_obj_void);
  impl_obj->kMeansDoneFlushed();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_TraceProjectionsBOC::kMeansDoneFlushed_8_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finalize();
 */
void CProxy_TraceProjectionsBOC::finalize(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceProjectionsBOC::idx_finalize_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceProjectionsBOC::idx_finalize_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceProjectionsBOC::idx_finalize_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TraceProjectionsBOC::finalize(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_TraceProjectionsBOC::idx_finalize_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TraceProjectionsBOC::finalize(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_TraceProjectionsBOC::idx_finalize_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TraceProjectionsBOC::reg_finalize_void() {
  int epidx = CkRegisterEp("finalize()",
      reinterpret_cast<CkCallFnPtr>(_call_finalize_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_TraceProjectionsBOC::_call_finalize_void(void* impl_msg, void* impl_obj_void)
{
  TraceProjectionsBOC* impl_obj = static_cast<TraceProjectionsBOC*>(impl_obj_void);
  impl_obj->finalize();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_TraceProjectionsBOC::finalize_9_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void closingTraces();
 */
void CProxy_TraceProjectionsBOC::closingTraces(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceProjectionsBOC::idx_closingTraces_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceProjectionsBOC::idx_closingTraces_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceProjectionsBOC::idx_closingTraces_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TraceProjectionsBOC::closingTraces(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_TraceProjectionsBOC::idx_closingTraces_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TraceProjectionsBOC::closingTraces(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_TraceProjectionsBOC::idx_closingTraces_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TraceProjectionsBOC::reg_closingTraces_void() {
  int epidx = CkRegisterEp("closingTraces()",
      reinterpret_cast<CkCallFnPtr>(_call_closingTraces_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_TraceProjectionsBOC::_call_closingTraces_void(void* impl_msg, void* impl_obj_void)
{
  TraceProjectionsBOC* impl_obj = static_cast<TraceProjectionsBOC*>(impl_obj_void);
  impl_obj->closingTraces();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_TraceProjectionsBOC::closingTraces_10_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void closeParallelShutdown();
 */
void CProxy_TraceProjectionsBOC::closeParallelShutdown(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceProjectionsBOC::idx_closeParallelShutdown_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceProjectionsBOC::idx_closeParallelShutdown_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceProjectionsBOC::idx_closeParallelShutdown_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TraceProjectionsBOC::closeParallelShutdown(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_TraceProjectionsBOC::idx_closeParallelShutdown_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TraceProjectionsBOC::closeParallelShutdown(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_TraceProjectionsBOC::idx_closeParallelShutdown_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TraceProjectionsBOC::reg_closeParallelShutdown_void() {
  int epidx = CkRegisterEp("closeParallelShutdown()",
      reinterpret_cast<CkCallFnPtr>(_call_closeParallelShutdown_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_TraceProjectionsBOC::reg_redn_wrapper_closeParallelShutdown_void() {
  return CkRegisterEp("redn_wrapper_closeParallelShutdown(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_closeParallelShutdown_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_TraceProjectionsBOC::_call_closeParallelShutdown_void(void* impl_msg, void* impl_obj_void)
{
  TraceProjectionsBOC* impl_obj = static_cast<TraceProjectionsBOC*>(impl_obj_void);
  impl_obj->closeParallelShutdown();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_TraceProjectionsBOC::closeParallelShutdown_11_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void flush_warning(int pe);
 */
void CProxy_TraceProjectionsBOC::flush_warning(int pe, const CkEntryOptions *impl_e_opts)
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
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_TraceProjectionsBOC::idx_flush_warning_marshall12(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_TraceProjectionsBOC::idx_flush_warning_marshall12(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_TraceProjectionsBOC::idx_flush_warning_marshall12(), impl_msg, ckGetGroupID(),0);
}
void CProxy_TraceProjectionsBOC::flush_warning(int pe, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
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
  CkSendMsgBranchMulti(CkIndex_TraceProjectionsBOC::idx_flush_warning_marshall12(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_TraceProjectionsBOC::flush_warning(int pe, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
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
  CkSendMsgBranchGroup(CkIndex_TraceProjectionsBOC::idx_flush_warning_marshall12(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_TraceProjectionsBOC::reg_flush_warning_marshall12() {
  int epidx = CkRegisterEp("flush_warning(int pe)",
      reinterpret_cast<CkCallFnPtr>(_call_flush_warning_marshall12), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_flush_warning_marshall12);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_flush_warning_marshall12);

  return epidx;
}

void CkIndex_TraceProjectionsBOC::_call_flush_warning_marshall12(void* impl_msg, void* impl_obj_void)
{
  TraceProjectionsBOC* impl_obj = static_cast<TraceProjectionsBOC*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int pe*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> pe;
  implP|pe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->flush_warning(std::move(pe.t));
}
int CkIndex_TraceProjectionsBOC::_callmarshall_flush_warning_marshall12(char* impl_buf, void* impl_obj_void) {
  TraceProjectionsBOC* impl_obj = static_cast<TraceProjectionsBOC*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int pe*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> pe;
  implP|pe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->flush_warning(std::move(pe.t));
  return implP.size();
}
void CkIndex_TraceProjectionsBOC::_marshallmessagepup_flush_warning_marshall12(PUP::er &implDestP,void *impl_msg) {
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
PUPable_def(SINGLE_ARG(Closure_TraceProjectionsBOC::flush_warning_12_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceProjectionsBOC(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_TraceProjectionsBOC::reg_TraceProjectionsBOC_CkMigrateMessage() {
  int epidx = CkRegisterEp("TraceProjectionsBOC(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_TraceProjectionsBOC_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_TraceProjectionsBOC::_call_TraceProjectionsBOC_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) TraceProjectionsBOC((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceProjectionsBOC(const bool &impl_noname_6, const bool &impl_noname_7);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void traceProjectionsParallelShutdown(int impl_noname_8);
 */
void CProxySection_TraceProjectionsBOC::traceProjectionsParallelShutdown(int impl_noname_8, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_8
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_8;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_8;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceProjectionsBOC::idx_traceProjectionsParallelShutdown_marshall2(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceProjectionsBOC::idx_traceProjectionsParallelShutdown_marshall2(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startTimeAnalysis();
 */
void CProxySection_TraceProjectionsBOC::startTimeAnalysis(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceProjectionsBOC::idx_startTimeAnalysis_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceProjectionsBOC::idx_startTimeAnalysis_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startTimeDone(double impl_noname_9);
 */
void CProxySection_TraceProjectionsBOC::startTimeDone(double impl_noname_9, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double impl_noname_9
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_9;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_9;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceProjectionsBOC::idx_startTimeDone_marshall4(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceProjectionsBOC::idx_startTimeDone_marshall4(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void startEndTimeAnalysis();
 */
void CProxySection_TraceProjectionsBOC::startEndTimeAnalysis(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceProjectionsBOC::idx_startEndTimeAnalysis_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceProjectionsBOC::idx_startEndTimeAnalysis_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void endTimeDone(double impl_noname_a);
 */
void CProxySection_TraceProjectionsBOC::endTimeDone(double impl_noname_a, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double impl_noname_a
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_a;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_a;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceProjectionsBOC::idx_endTimeDone_marshall6(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceProjectionsBOC::idx_endTimeDone_marshall6(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void kMeansDone();
 */
void CProxySection_TraceProjectionsBOC::kMeansDone(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceProjectionsBOC::idx_kMeansDone_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceProjectionsBOC::idx_kMeansDone_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void kMeansDoneFlushed();
 */
void CProxySection_TraceProjectionsBOC::kMeansDoneFlushed(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceProjectionsBOC::idx_kMeansDoneFlushed_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceProjectionsBOC::idx_kMeansDoneFlushed_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finalize();
 */
void CProxySection_TraceProjectionsBOC::finalize(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceProjectionsBOC::idx_finalize_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceProjectionsBOC::idx_finalize_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void closingTraces();
 */
void CProxySection_TraceProjectionsBOC::closingTraces(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceProjectionsBOC::idx_closingTraces_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceProjectionsBOC::idx_closingTraces_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void closeParallelShutdown();
 */
void CProxySection_TraceProjectionsBOC::closeParallelShutdown(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceProjectionsBOC::idx_closeParallelShutdown_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceProjectionsBOC::idx_closeParallelShutdown_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void flush_warning(int pe);
 */
void CProxySection_TraceProjectionsBOC::flush_warning(int pe, const CkEntryOptions *impl_e_opts)
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
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_TraceProjectionsBOC::idx_flush_warning_marshall12(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_TraceProjectionsBOC::idx_flush_warning_marshall12(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceProjectionsBOC(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_TraceProjectionsBOC::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,TraceProjectionsBOC::isIrreducible());
  // REG: TraceProjectionsBOC(const bool &impl_noname_6, const bool &impl_noname_7);
  idx_TraceProjectionsBOC_marshall1();

  // REG: void traceProjectionsParallelShutdown(int impl_noname_8);
  idx_traceProjectionsParallelShutdown_marshall2();

  // REG: void startTimeAnalysis();
  idx_startTimeAnalysis_void();

  // REG: void startTimeDone(double impl_noname_9);
  idx_startTimeDone_marshall4();
  idx_redn_wrapper_startTimeDone_marshall4();

  // REG: void startEndTimeAnalysis();
  idx_startEndTimeAnalysis_void();

  // REG: void endTimeDone(double impl_noname_a);
  idx_endTimeDone_marshall6();
  idx_redn_wrapper_endTimeDone_marshall6();

  // REG: void kMeansDone();
  idx_kMeansDone_void();
  idx_redn_wrapper_kMeansDone_void();

  // REG: void kMeansDoneFlushed();
  idx_kMeansDoneFlushed_void();

  // REG: void finalize();
  idx_finalize_void();

  // REG: void closingTraces();
  idx_closingTraces_void();

  // REG: void closeParallelShutdown();
  idx_closeParallelShutdown_void();
  idx_redn_wrapper_closeParallelShutdown_void();

  // REG: void flush_warning(int pe);
  idx_flush_warning_marshall12();

  // REG: TraceProjectionsBOC(CkMigrateMessage* impl_msg);
  idx_TraceProjectionsBOC_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_TraceProjectionsBOC_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerTraceProjections(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message KMeansStatsMessage{
bool filter[];
double kSeedsPos[];
double stats[];
}
;
*/
CMessage_KMeansStatsMessage::__register("KMeansStatsMessage", sizeof(KMeansStatsMessage),(CkPackFnPtr) KMeansStatsMessage::pack,(CkUnpackFnPtr) KMeansStatsMessage::unpack);

/* REG: message KSeedsMessage{
double kSeedsPos[];
}
;
*/
CMessage_KSeedsMessage::__register("KSeedsMessage", sizeof(KSeedsMessage),(CkPackFnPtr) KSeedsMessage::pack,(CkUnpackFnPtr) KSeedsMessage::unpack);

/* REG: message KSelectionMessage{
int minIDs[];
int maxIDs[];
}
;
*/
CMessage_KSelectionMessage::__register("KSelectionMessage", sizeof(KSelectionMessage),(CkPackFnPtr) KSelectionMessage::pack,(CkUnpackFnPtr) KSelectionMessage::unpack);

/* REG: mainchare TraceProjectionsInit: Chare{
TraceProjectionsInit(CkArgMsg* impl_msg);
};
*/
  CkIndex_TraceProjectionsInit::__register("TraceProjectionsInit", sizeof(TraceProjectionsInit));

  _registerInitCall(registerOutlierReduction,1);

  _registerInitCall(initTraceProjectionsBOC,1);

  CkRegisterReadonly("traceProjectionsGID","CkGroupID",sizeof(traceProjectionsGID),(void *) &traceProjectionsGID,__xlater_roPup_traceProjectionsGID);

  CkRegisterReadonly("kMeansGID","CkGroupID",sizeof(kMeansGID),(void *) &kMeansGID,__xlater_roPup_kMeansGID);

/* REG: group KMeansBOC: IrrGroup{
KMeansBOC(const bool &impl_noname_0, int impl_noname_1, int impl_noname_2, double impl_noname_3, const bool &impl_noname_4);
void startKMeansAnalysis();
void flushCheck(const bool &impl_noname_5);
void flushCheckDone();
void getNextPhaseMetrics();
void globalMetricRefinement(CkReductionMsg* impl_msg);
void findInitialClusters(KMeansStatsMessage* impl_msg);
void updateKSeeds(const double *result, int n);
void updateSeedMembership(KSeedsMessage* impl_msg);
void collectDistances(KSelectionMessage* impl_msg);
void findNextMinMax(CkReductionMsg* impl_msg);
void phaseDone();
KMeansBOC(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_KMeansBOC::__register("KMeansBOC", sizeof(KMeansBOC));

/* REG: group TraceProjectionsBOC: IrrGroup{
TraceProjectionsBOC(const bool &impl_noname_6, const bool &impl_noname_7);
void traceProjectionsParallelShutdown(int impl_noname_8);
void startTimeAnalysis();
void startTimeDone(double impl_noname_9);
void startEndTimeAnalysis();
void endTimeDone(double impl_noname_a);
void kMeansDone();
void kMeansDoneFlushed();
void finalize();
void closingTraces();
void closeParallelShutdown();
void flush_warning(int pe);
TraceProjectionsBOC(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_TraceProjectionsBOC::__register("TraceProjectionsBOC", sizeof(TraceProjectionsBOC));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_TraceProjectionsInit::virtual_pup(PUP::er &p) {
    recursive_pup<TraceProjectionsInit>(dynamic_cast<TraceProjectionsInit*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_KMeansBOC::virtual_pup(PUP::er &p) {
    recursive_pup<KMeansBOC>(dynamic_cast<KMeansBOC*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_TraceProjectionsBOC::virtual_pup(PUP::er &p) {
    recursive_pup<TraceProjectionsBOC>(dynamic_cast<TraceProjectionsBOC*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
