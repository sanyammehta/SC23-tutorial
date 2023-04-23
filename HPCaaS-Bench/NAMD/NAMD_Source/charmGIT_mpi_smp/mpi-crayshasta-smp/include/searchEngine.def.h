





/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_SearchConductor::start_3_closure : public SDAG::Closure {
      

      start_3_closure() {
        init();
      }
      start_3_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~start_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(start_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_SearchConductor::groupInitComplete_4_closure : public SDAG::Closure {
      

      groupInitComplete_4_closure() {
        init();
      }
      groupInitComplete_4_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~groupInitComplete_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(groupInitComplete_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_SearchConductor::foundSolution_5_closure : public SDAG::Closure {
      

      foundSolution_5_closure() {
        init();
      }
      foundSolution_5_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~foundSolution_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(foundSolution_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_SearchGroup::sendCounts_2_closure : public SDAG::Closure {
      

      sendCounts_2_closure() {
        init();
      }
      sendCounts_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~sendCounts_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(sendCounts_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_SearchGroup::init_4_closure : public SDAG::Closure {
      

      init_4_closure() {
        init();
      }
      init_4_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~init_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(init_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_SearchGroup::setParallelLevel_5_closure : public SDAG::Closure {
            int impl_noname_0;


      setParallelLevel_5_closure() {
        init();
      }
      setParallelLevel_5_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return impl_noname_0;}
      void pup(PUP::er& __p) {
        __p | impl_noname_0;
        packClosure(__p);
      }
      virtual ~setParallelLevel_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(setParallelLevel_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_SearchGroup::searchDepthChange_6_closure : public SDAG::Closure {
            int impl_noname_1;


      searchDepthChange_6_closure() {
        init();
      }
      searchDepthChange_6_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return impl_noname_1;}
      void pup(PUP::er& __p) {
        __p | impl_noname_1;
        packClosure(__p);
      }
      virtual ~searchDepthChange_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(searchDepthChange_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_SearchGroup::killSearch_7_closure : public SDAG::Closure {
      

      killSearch_7_closure() {
        init();
      }
      killSearch_7_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~killSearch_7_closure() {
      }
      PUPable_decl(SINGLE_ARG(killSearch_7_closure));
    };
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: readonly CProxy_SearchConductor searchEngineProxy;
 */
extern CProxy_SearchConductor searchEngineProxy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_searchEngineProxy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|searchEngineProxy;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CProxy_SearchGroup groupProxy;
 */
extern CProxy_SearchGroup groupProxy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_groupProxy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|groupProxy;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int se_statesize;
 */
extern int se_statesize;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_se_statesize(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|se_statesize;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message countMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_countMsg::operator new(size_t s){
  return countMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_countMsg::operator new(size_t s, int* sz){
  return countMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_countMsg::operator new(size_t s, int* sz,const int pb){
  return countMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_countMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return countMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_countMsg::operator new(size_t s, const int p) {
  return countMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_countMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return countMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_countMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_countMsg::CMessage_countMsg() {
countMsg *newmsg = (countMsg *)this;
}
void CMessage_countMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_countMsg::pack(countMsg *msg) {
  return (void *) msg;
}
countMsg* CMessage_countMsg::unpack(void* buf) {
  countMsg *msg = (countMsg *) buf;
  return msg;
}
int CMessage_countMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message SearchNodeMsg{
char objectDump[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_SearchNodeMsg::operator new(size_t s){
  return SearchNodeMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_SearchNodeMsg::operator new(size_t s, int* sz){
  return SearchNodeMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_SearchNodeMsg::operator new(size_t s, int* sz,const int pb){
  return SearchNodeMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_SearchNodeMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return SearchNodeMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_SearchNodeMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return SearchNodeMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_SearchNodeMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return SearchNodeMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_SearchNodeMsg::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return SearchNodeMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_SearchNodeMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(char)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_SearchNodeMsg::CMessage_SearchNodeMsg() {
SearchNodeMsg *newmsg = (SearchNodeMsg *)this;
  newmsg->objectDump = (char *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_SearchNodeMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_SearchNodeMsg::pack(SearchNodeMsg *msg) {
  msg->objectDump = (char *) ((char *)msg->objectDump - (char *)msg);
  return (void *) msg;
}
SearchNodeMsg* CMessage_SearchNodeMsg::unpack(void* buf) {
  SearchNodeMsg *msg = (SearchNodeMsg *) buf;
  msg->objectDump = (char *) ((size_t)msg->objectDump + (char *)msg);
  return msg;
}
int CMessage_SearchNodeMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: mainchare SearchConductor: Chare{
SearchConductor(CkArgMsg* impl_msg);
threaded void allSearchNodeDone(CkQdMsg* impl_msg);
void start();
void groupInitComplete();
void foundSolution();
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_SearchConductor::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: SearchConductor(CkArgMsg* impl_msg);
 */
CkChareID CProxy_SearchConductor::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_SearchConductor::__idx, CkIndex_SearchConductor::idx_SearchConductor_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_SearchConductor::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_SearchConductor::__idx, CkIndex_SearchConductor::idx_SearchConductor_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function
int CkIndex_SearchConductor::reg_SearchConductor_CkArgMsg() {
  int epidx = CkRegisterEp("SearchConductor(CkArgMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_SearchConductor_CkArgMsg), CMessage_CkArgMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}

void CkIndex_SearchConductor::_call_SearchConductor_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  SearchConductor* impl_obj = static_cast<SearchConductor*>(impl_obj_void);
  new (impl_obj_void) SearchConductor((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void allSearchNodeDone(CkQdMsg* impl_msg);
 */
void CProxy_SearchConductor::allSearchNodeDone(CkQdMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_SearchConductor::idx_allSearchNodeDone_CkQdMsg(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_SearchConductor::idx_allSearchNodeDone_CkQdMsg(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_SearchConductor::idx_allSearchNodeDone_CkQdMsg(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_SearchConductor::reg_allSearchNodeDone_CkQdMsg() {
  int epidx = CkRegisterEp("allSearchNodeDone(CkQdMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_allSearchNodeDone_CkQdMsg), CMessage_CkQdMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkQdMsg::ckDebugPup);
  return epidx;
}

void CkIndex_SearchConductor::_call_allSearchNodeDone_CkQdMsg(void* impl_msg, void* impl_obj_void)
{
  SearchConductor* impl_obj = static_cast<SearchConductor*>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_allSearchNodeDone_CkQdMsg, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthTraceResume(tid);
  CthResume(tid);
}
void CkIndex_SearchConductor::_callthr_allSearchNodeDone_CkQdMsg(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  void *impl_obj_void = impl_arg->obj;
  SearchConductor *impl_obj = static_cast<SearchConductor *>(impl_obj_void);
  delete impl_arg;
  impl_obj->allSearchNodeDone((CkQdMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void start();
 */
void CProxy_SearchConductor::start(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_SearchConductor::idx_start_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_SearchConductor::idx_start_void(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_SearchConductor::idx_start_void(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_SearchConductor::reg_start_void() {
  int epidx = CkRegisterEp("start()",
      reinterpret_cast<CkCallFnPtr>(_call_start_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_SearchConductor::_call_start_void(void* impl_msg, void* impl_obj_void)
{
  SearchConductor* impl_obj = static_cast<SearchConductor*>(impl_obj_void);
  impl_obj->start();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_SearchConductor::start_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void groupInitComplete();
 */
void CProxy_SearchConductor::groupInitComplete(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_SearchConductor::idx_groupInitComplete_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_SearchConductor::idx_groupInitComplete_void(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_SearchConductor::idx_groupInitComplete_void(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_SearchConductor::reg_groupInitComplete_void() {
  int epidx = CkRegisterEp("groupInitComplete()",
      reinterpret_cast<CkCallFnPtr>(_call_groupInitComplete_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_SearchConductor::_call_groupInitComplete_void(void* impl_msg, void* impl_obj_void)
{
  SearchConductor* impl_obj = static_cast<SearchConductor*>(impl_obj_void);
  impl_obj->groupInitComplete();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_SearchConductor::groupInitComplete_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void foundSolution();
 */
void CProxy_SearchConductor::foundSolution(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_SearchConductor::idx_foundSolution_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_SearchConductor::idx_foundSolution_void(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_SearchConductor::idx_foundSolution_void(), impl_msg, &ckGetChareID(),0+CK_MSG_EXPEDITED);
  }
}

// Entry point registration function
int CkIndex_SearchConductor::reg_foundSolution_void() {
  int epidx = CkRegisterEp("foundSolution()",
      reinterpret_cast<CkCallFnPtr>(_call_foundSolution_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_SearchConductor::_call_foundSolution_void(void* impl_msg, void* impl_obj_void)
{
  SearchConductor* impl_obj = static_cast<SearchConductor*>(impl_obj_void);
  impl_obj->foundSolution();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_SearchConductor::foundSolution_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_SearchConductor::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: SearchConductor(CkArgMsg* impl_msg);
  idx_SearchConductor_CkArgMsg();
  CkRegisterMainChare(__idx, idx_SearchConductor_CkArgMsg());

  // REG: threaded void allSearchNodeDone(CkQdMsg* impl_msg);
  idx_allSearchNodeDone_CkQdMsg();

  // REG: void start();
  idx_start_void();

  // REG: void groupInitComplete();
  idx_groupInitComplete_void();

  // REG: void foundSolution();
  idx_foundSolution_void();

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group SearchGroup: IrrGroup{
SearchGroup();
void sendCounts();
void childCount(countMsg* impl_msg);
void init();
void setParallelLevel(int impl_noname_0);
void searchDepthChange(int impl_noname_1);
void killSearch();
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_SearchGroup::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: SearchGroup();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendCounts();
 */
void CProxyElement_SearchGroup::sendCounts(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_SearchGroup::idx_sendCounts_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_SearchGroup::idx_sendCounts_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_SearchGroup::idx_sendCounts_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void childCount(countMsg* impl_msg);
 */
void CProxyElement_SearchGroup::childCount(countMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_SearchGroup::idx_childCount_countMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_SearchGroup::idx_childCount_countMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_SearchGroup::idx_childCount_countMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void init();
 */
void CProxyElement_SearchGroup::init(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_SearchGroup::idx_init_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_SearchGroup::idx_init_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_SearchGroup::idx_init_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setParallelLevel(int impl_noname_0);
 */
void CProxyElement_SearchGroup::setParallelLevel(int impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_SearchGroup::idx_setParallelLevel_marshall5(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_SearchGroup::idx_setParallelLevel_marshall5(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_SearchGroup::idx_setParallelLevel_marshall5(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void searchDepthChange(int impl_noname_1);
 */
void CProxyElement_SearchGroup::searchDepthChange(int impl_noname_1, const CkEntryOptions *impl_e_opts)
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
     CkGroupMsgPrep(CkIndex_SearchGroup::idx_searchDepthChange_marshall6(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_SearchGroup::idx_searchDepthChange_marshall6(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_SearchGroup::idx_searchDepthChange_marshall6(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void killSearch();
 */
void CProxyElement_SearchGroup::killSearch(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_SearchGroup::idx_killSearch_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_SearchGroup::idx_killSearch_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_SearchGroup::idx_killSearch_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: SearchGroup();
 */
CkGroupID CProxy_SearchGroup::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_SearchGroup::__idx, CkIndex_SearchGroup::idx_SearchGroup_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_SearchGroup::reg_SearchGroup_void() {
  int epidx = CkRegisterEp("SearchGroup()",
      reinterpret_cast<CkCallFnPtr>(_call_SearchGroup_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_SearchGroup::_call_SearchGroup_void(void* impl_msg, void* impl_obj_void)
{
  SearchGroup* impl_obj = static_cast<SearchGroup*>(impl_obj_void);
  new (impl_obj_void) SearchGroup();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendCounts();
 */
void CProxy_SearchGroup::sendCounts(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_SearchGroup::idx_sendCounts_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_SearchGroup::idx_sendCounts_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_SearchGroup::idx_sendCounts_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_SearchGroup::sendCounts(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_SearchGroup::idx_sendCounts_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_SearchGroup::sendCounts(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_SearchGroup::idx_sendCounts_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_SearchGroup::reg_sendCounts_void() {
  int epidx = CkRegisterEp("sendCounts()",
      reinterpret_cast<CkCallFnPtr>(_call_sendCounts_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_SearchGroup::_call_sendCounts_void(void* impl_msg, void* impl_obj_void)
{
  SearchGroup* impl_obj = static_cast<SearchGroup*>(impl_obj_void);
  impl_obj->sendCounts();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_SearchGroup::sendCounts_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void childCount(countMsg* impl_msg);
 */
void CProxy_SearchGroup::childCount(countMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_SearchGroup::idx_childCount_countMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_SearchGroup::idx_childCount_countMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_SearchGroup::idx_childCount_countMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_SearchGroup::childCount(countMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_SearchGroup::idx_childCount_countMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_SearchGroup::childCount(countMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_SearchGroup::idx_childCount_countMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_SearchGroup::reg_childCount_countMsg() {
  int epidx = CkRegisterEp("childCount(countMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_childCount_countMsg), CMessage_countMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)countMsg::ckDebugPup);
  return epidx;
}

void CkIndex_SearchGroup::_call_childCount_countMsg(void* impl_msg, void* impl_obj_void)
{
  SearchGroup* impl_obj = static_cast<SearchGroup*>(impl_obj_void);
  impl_obj->childCount((countMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void init();
 */
void CProxy_SearchGroup::init(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_SearchGroup::idx_init_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_SearchGroup::idx_init_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_SearchGroup::idx_init_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_SearchGroup::init(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_SearchGroup::idx_init_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_SearchGroup::init(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_SearchGroup::idx_init_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_SearchGroup::reg_init_void() {
  int epidx = CkRegisterEp("init()",
      reinterpret_cast<CkCallFnPtr>(_call_init_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_SearchGroup::_call_init_void(void* impl_msg, void* impl_obj_void)
{
  SearchGroup* impl_obj = static_cast<SearchGroup*>(impl_obj_void);
  impl_obj->init();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_SearchGroup::init_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setParallelLevel(int impl_noname_0);
 */
void CProxy_SearchGroup::setParallelLevel(int impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_SearchGroup::idx_setParallelLevel_marshall5(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_SearchGroup::idx_setParallelLevel_marshall5(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_SearchGroup::idx_setParallelLevel_marshall5(), impl_msg, ckGetGroupID(),0);
}
void CProxy_SearchGroup::setParallelLevel(int impl_noname_0, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
  }
  CkSendMsgBranchMulti(CkIndex_SearchGroup::idx_setParallelLevel_marshall5(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_SearchGroup::setParallelLevel(int impl_noname_0, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
  }
  CkSendMsgBranchGroup(CkIndex_SearchGroup::idx_setParallelLevel_marshall5(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_SearchGroup::reg_setParallelLevel_marshall5() {
  int epidx = CkRegisterEp("setParallelLevel(int impl_noname_0)",
      reinterpret_cast<CkCallFnPtr>(_call_setParallelLevel_marshall5), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_setParallelLevel_marshall5);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_setParallelLevel_marshall5);

  return epidx;
}

void CkIndex_SearchGroup::_call_setParallelLevel_marshall5(void* impl_msg, void* impl_obj_void)
{
  SearchGroup* impl_obj = static_cast<SearchGroup*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setParallelLevel(std::move(impl_noname_0.t));
}
int CkIndex_SearchGroup::_callmarshall_setParallelLevel_marshall5(char* impl_buf, void* impl_obj_void) {
  SearchGroup* impl_obj = static_cast<SearchGroup*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setParallelLevel(std::move(impl_noname_0.t));
  return implP.size();
}
void CkIndex_SearchGroup::_marshallmessagepup_setParallelLevel_marshall5(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_0");
  implDestP|impl_noname_0;
}
PUPable_def(SINGLE_ARG(Closure_SearchGroup::setParallelLevel_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void searchDepthChange(int impl_noname_1);
 */
void CProxy_SearchGroup::searchDepthChange(int impl_noname_1, const CkEntryOptions *impl_e_opts)
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
     CkGroupMsgPrep(CkIndex_SearchGroup::idx_searchDepthChange_marshall6(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_SearchGroup::idx_searchDepthChange_marshall6(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_SearchGroup::idx_searchDepthChange_marshall6(), impl_msg, ckGetGroupID(),0);
}
void CProxy_SearchGroup::searchDepthChange(int impl_noname_1, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
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
  CkSendMsgBranchMulti(CkIndex_SearchGroup::idx_searchDepthChange_marshall6(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_SearchGroup::searchDepthChange(int impl_noname_1, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
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
  CkSendMsgBranchGroup(CkIndex_SearchGroup::idx_searchDepthChange_marshall6(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_SearchGroup::reg_searchDepthChange_marshall6() {
  int epidx = CkRegisterEp("searchDepthChange(int impl_noname_1)",
      reinterpret_cast<CkCallFnPtr>(_call_searchDepthChange_marshall6), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_searchDepthChange_marshall6);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_searchDepthChange_marshall6);

  return epidx;
}

void CkIndex_SearchGroup::_call_searchDepthChange_marshall6(void* impl_msg, void* impl_obj_void)
{
  SearchGroup* impl_obj = static_cast<SearchGroup*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_1*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_1;
  implP|impl_noname_1;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->searchDepthChange(std::move(impl_noname_1.t));
}
int CkIndex_SearchGroup::_callmarshall_searchDepthChange_marshall6(char* impl_buf, void* impl_obj_void) {
  SearchGroup* impl_obj = static_cast<SearchGroup*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int impl_noname_1*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_1;
  implP|impl_noname_1;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->searchDepthChange(std::move(impl_noname_1.t));
  return implP.size();
}
void CkIndex_SearchGroup::_marshallmessagepup_searchDepthChange_marshall6(PUP::er &implDestP,void *impl_msg) {
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
PUPable_def(SINGLE_ARG(Closure_SearchGroup::searchDepthChange_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void killSearch();
 */
void CProxy_SearchGroup::killSearch(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_SearchGroup::idx_killSearch_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_SearchGroup::idx_killSearch_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_SearchGroup::idx_killSearch_void(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
void CProxy_SearchGroup::killSearch(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_SearchGroup::idx_killSearch_void(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}
void CProxy_SearchGroup::killSearch(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_SearchGroup::idx_killSearch_void(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_SearchGroup::reg_killSearch_void() {
  int epidx = CkRegisterEp("killSearch()",
      reinterpret_cast<CkCallFnPtr>(_call_killSearch_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_SearchGroup::_call_killSearch_void(void* impl_msg, void* impl_obj_void)
{
  SearchGroup* impl_obj = static_cast<SearchGroup*>(impl_obj_void);
  impl_obj->killSearch();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_SearchGroup::killSearch_7_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: SearchGroup();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendCounts();
 */
void CProxySection_SearchGroup::sendCounts(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_SearchGroup::idx_sendCounts_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_SearchGroup::idx_sendCounts_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void childCount(countMsg* impl_msg);
 */
void CProxySection_SearchGroup::childCount(countMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_SearchGroup::idx_childCount_countMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_SearchGroup::idx_childCount_countMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void init();
 */
void CProxySection_SearchGroup::init(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_SearchGroup::idx_init_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_SearchGroup::idx_init_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setParallelLevel(int impl_noname_0);
 */
void CProxySection_SearchGroup::setParallelLevel(int impl_noname_0, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_SearchGroup::idx_setParallelLevel_marshall5(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_SearchGroup::idx_setParallelLevel_marshall5(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void searchDepthChange(int impl_noname_1);
 */
void CProxySection_SearchGroup::searchDepthChange(int impl_noname_1, const CkEntryOptions *impl_e_opts)
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
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_SearchGroup::idx_searchDepthChange_marshall6(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_SearchGroup::idx_searchDepthChange_marshall6(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void killSearch();
 */
void CProxySection_SearchGroup::killSearch(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_SearchGroup::idx_killSearch_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_SearchGroup::idx_killSearch_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_SearchGroup::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,SearchGroup::isIrreducible());
  // REG: SearchGroup();
  idx_SearchGroup_void();
  CkRegisterDefaultCtor(__idx, idx_SearchGroup_void());

  // REG: void sendCounts();
  idx_sendCounts_void();

  // REG: void childCount(countMsg* impl_msg);
  idx_childCount_countMsg();

  // REG: void init();
  idx_init_void();

  // REG: void setParallelLevel(int impl_noname_0);
  idx_setParallelLevel_marshall5();

  // REG: void searchDepthChange(int impl_noname_1);
  idx_searchDepthChange_marshall6();

  // REG: void killSearch();
  idx_killSearch_void();

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: chare SearchNode: Chare{
SearchNode(SearchNodeMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_SearchNode::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: SearchNode(SearchNodeMsg* impl_msg);
 */
CkChareID CProxy_SearchNode::ckNew(SearchNodeMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_SearchNode::__idx, CkIndex_SearchNode::idx_SearchNode_SearchNodeMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_SearchNode::ckNew(SearchNodeMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_SearchNode::__idx, CkIndex_SearchNode::idx_SearchNode_SearchNodeMsg(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function
int CkIndex_SearchNode::reg_SearchNode_SearchNodeMsg() {
  int epidx = CkRegisterEp("SearchNode(SearchNodeMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_SearchNode_SearchNodeMsg), CMessage_SearchNodeMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)SearchNodeMsg::ckDebugPup);
  return epidx;
}

void CkIndex_SearchNode::_call_SearchNode_SearchNodeMsg(void* impl_msg, void* impl_obj_void)
{
  SearchNode* impl_obj = static_cast<SearchNode*>(impl_obj_void);
  new (impl_obj_void) SearchNode((SearchNodeMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_SearchNode::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: SearchNode(SearchNodeMsg* impl_msg);
  idx_SearchNode_SearchNodeMsg();

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registersearchEngine(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  CkRegisterReadonly("searchEngineProxy","CProxy_SearchConductor",sizeof(searchEngineProxy),(void *) &searchEngineProxy,__xlater_roPup_searchEngineProxy);

  CkRegisterReadonly("groupProxy","CProxy_SearchGroup",sizeof(groupProxy),(void *) &groupProxy,__xlater_roPup_groupProxy);

  CkRegisterReadonly("se_statesize","int",sizeof(se_statesize),(void *) &se_statesize,__xlater_roPup_se_statesize);

/* REG: message countMsg;
*/
CMessage_countMsg::__register("countMsg", sizeof(countMsg),(CkPackFnPtr) countMsg::pack,(CkUnpackFnPtr) countMsg::unpack);

/* REG: message SearchNodeMsg{
char objectDump[];
}
;
*/
CMessage_SearchNodeMsg::__register("SearchNodeMsg", sizeof(SearchNodeMsg),(CkPackFnPtr) SearchNodeMsg::pack,(CkUnpackFnPtr) SearchNodeMsg::unpack);

  _registerInitCall(registerSE,0);

/* REG: mainchare SearchConductor: Chare{
SearchConductor(CkArgMsg* impl_msg);
threaded void allSearchNodeDone(CkQdMsg* impl_msg);
void start();
void groupInitComplete();
void foundSolution();
};
*/
  CkIndex_SearchConductor::__register("SearchConductor", sizeof(SearchConductor));

/* REG: group SearchGroup: IrrGroup{
SearchGroup();
void sendCounts();
void childCount(countMsg* impl_msg);
void init();
void setParallelLevel(int impl_noname_0);
void searchDepthChange(int impl_noname_1);
void killSearch();
};
*/
  CkIndex_SearchGroup::__register("SearchGroup", sizeof(SearchGroup));

/* REG: chare SearchNode: Chare{
SearchNode(SearchNodeMsg* impl_msg);
};
*/
  CkIndex_SearchNode::__register("SearchNode", sizeof(SearchNode));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_SearchConductor::virtual_pup(PUP::er &p) {
    recursive_pup<SearchConductor>(dynamic_cast<SearchConductor*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_SearchGroup::virtual_pup(PUP::er &p) {
    recursive_pup<SearchGroup>(dynamic_cast<SearchGroup*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_SearchNode::virtual_pup(PUP::er &p) {
    recursive_pup<SearchNode>(dynamic_cast<SearchNode*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
