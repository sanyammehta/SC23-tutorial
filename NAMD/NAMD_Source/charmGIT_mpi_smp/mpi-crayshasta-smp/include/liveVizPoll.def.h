
/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_liveVizPollArray::liveVizPoll0Deposit_4_closure : public SDAG::Closure {
            int wid;
            int ht;
            int bpp;
            int len;
            byte *imageData;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      liveVizPoll0Deposit_4_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      liveVizPoll0Deposit_4_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            int & getP0() { return wid;}
            int & getP1() { return ht;}
            int & getP2() { return bpp;}
            int & getP3() { return len;}
            byte *& getP4() { return imageData;}
      void pup(PUP::er& __p) {
        __p | wid;
        __p | ht;
        __p | bpp;
        __p | len;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> wid;
  implP|wid;
  PUP::detail::TemporaryObjectHolder<int> ht;
  implP|ht;
  PUP::detail::TemporaryObjectHolder<int> bpp;
  implP|bpp;
  PUP::detail::TemporaryObjectHolder<int> len;
  implP|len;
  int impl_off_imageData, impl_cnt_imageData;
  implP|impl_off_imageData;
  implP|impl_cnt_imageData;
          impl_buf+=CK_ALIGN(implP.size(),16);
          imageData = (byte *)(impl_buf+impl_off_imageData);
        }
      }
      virtual ~liveVizPoll0Deposit_4_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(liveVizPoll0Deposit_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: readonly CProxy_liveVizPollArray myGroupProxy;
 */
extern CProxy_liveVizPollArray myGroupProxy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_myGroupProxy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|myGroupProxy;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group liveVizPollArray: IrrGroup{
liveVizPollArray();
void combine(CkReductionMsg* impl_msg);
void request(liveVizRequestMsg* impl_msg);
void liveVizPoll0Deposit(int wid, int ht, int bpp, int len, const byte *imageData);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_liveVizPollArray::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: liveVizPollArray();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void combine(CkReductionMsg* impl_msg);
 */
void CProxyElement_liveVizPollArray::combine(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_liveVizPollArray::idx_combine_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_liveVizPollArray::idx_combine_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_liveVizPollArray::idx_combine_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
void CkIndex_liveVizPollArray::_call_redn_wrapper_combine_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  liveVizPollArray* impl_obj = static_cast<liveVizPollArray*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->combine((CkReductionMsg*)impl_msg);
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void request(liveVizRequestMsg* impl_msg);
 */
void CProxyElement_liveVizPollArray::request(liveVizRequestMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_liveVizPollArray::idx_request_liveVizRequestMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_liveVizPollArray::idx_request_liveVizRequestMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_liveVizPollArray::idx_request_liveVizRequestMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void liveVizPoll0Deposit(int wid, int ht, int bpp, int len, const byte *imageData);
 */
void CProxyElement_liveVizPollArray::liveVizPoll0Deposit(int wid, int ht, int bpp, int len, const byte *imageData, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int wid, int ht, int bpp, int len, const byte *imageData
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_imageData, impl_cnt_imageData;
  impl_off_imageData=impl_off=CK_ALIGN(impl_off,sizeof(byte));
  impl_off+=(impl_cnt_imageData=sizeof(byte)*(len));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|wid;
    implP|ht;
    implP|bpp;
    implP|len;
    implP|impl_off_imageData;
    implP|impl_cnt_imageData;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|wid;
    implP|ht;
    implP|bpp;
    implP|len;
    implP|impl_off_imageData;
    implP|impl_cnt_imageData;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_imageData,imageData,impl_cnt_imageData);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_liveVizPollArray::idx_liveVizPoll0Deposit_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_liveVizPollArray::idx_liveVizPoll0Deposit_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_liveVizPollArray::idx_liveVizPoll0Deposit_marshall4(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: liveVizPollArray();
 */
CkGroupID CProxy_liveVizPollArray::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_liveVizPollArray::__idx, CkIndex_liveVizPollArray::idx_liveVizPollArray_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_liveVizPollArray::reg_liveVizPollArray_void() {
  int epidx = CkRegisterEp("liveVizPollArray()",
      reinterpret_cast<CkCallFnPtr>(_call_liveVizPollArray_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_liveVizPollArray::_call_liveVizPollArray_void(void* impl_msg, void* impl_obj_void)
{
  liveVizPollArray* impl_obj = static_cast<liveVizPollArray*>(impl_obj_void);
  new (impl_obj_void) liveVizPollArray();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void combine(CkReductionMsg* impl_msg);
 */
void CProxy_liveVizPollArray::combine(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_liveVizPollArray::idx_combine_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_liveVizPollArray::idx_combine_CkReductionMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_liveVizPollArray::idx_combine_CkReductionMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_liveVizPollArray::combine(CkReductionMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_liveVizPollArray::idx_combine_CkReductionMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_liveVizPollArray::combine(CkReductionMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_liveVizPollArray::idx_combine_CkReductionMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_liveVizPollArray::reg_combine_CkReductionMsg() {
  int epidx = CkRegisterEp("combine(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_combine_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_liveVizPollArray::reg_redn_wrapper_combine_CkReductionMsg() {
  return CkRegisterEp("redn_wrapper_combine(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_combine_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_liveVizPollArray::_call_combine_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  liveVizPollArray* impl_obj = static_cast<liveVizPollArray*>(impl_obj_void);
  impl_obj->combine((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void request(liveVizRequestMsg* impl_msg);
 */
void CProxy_liveVizPollArray::request(liveVizRequestMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_liveVizPollArray::idx_request_liveVizRequestMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_liveVizPollArray::idx_request_liveVizRequestMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_liveVizPollArray::idx_request_liveVizRequestMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_liveVizPollArray::request(liveVizRequestMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_liveVizPollArray::idx_request_liveVizRequestMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_liveVizPollArray::request(liveVizRequestMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_liveVizPollArray::idx_request_liveVizRequestMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_liveVizPollArray::reg_request_liveVizRequestMsg() {
  int epidx = CkRegisterEp("request(liveVizRequestMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_request_liveVizRequestMsg), CMessage_liveVizRequestMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)liveVizRequestMsg::ckDebugPup);
  return epidx;
}

void CkIndex_liveVizPollArray::_call_request_liveVizRequestMsg(void* impl_msg, void* impl_obj_void)
{
  liveVizPollArray* impl_obj = static_cast<liveVizPollArray*>(impl_obj_void);
  impl_obj->request((liveVizRequestMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void liveVizPoll0Deposit(int wid, int ht, int bpp, int len, const byte *imageData);
 */
void CProxy_liveVizPollArray::liveVizPoll0Deposit(int wid, int ht, int bpp, int len, const byte *imageData, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int wid, int ht, int bpp, int len, const byte *imageData
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_imageData, impl_cnt_imageData;
  impl_off_imageData=impl_off=CK_ALIGN(impl_off,sizeof(byte));
  impl_off+=(impl_cnt_imageData=sizeof(byte)*(len));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|wid;
    implP|ht;
    implP|bpp;
    implP|len;
    implP|impl_off_imageData;
    implP|impl_cnt_imageData;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|wid;
    implP|ht;
    implP|bpp;
    implP|len;
    implP|impl_off_imageData;
    implP|impl_cnt_imageData;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_imageData,imageData,impl_cnt_imageData);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_liveVizPollArray::idx_liveVizPoll0Deposit_marshall4(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_liveVizPollArray::idx_liveVizPoll0Deposit_marshall4(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_liveVizPollArray::idx_liveVizPoll0Deposit_marshall4(), impl_msg, ckGetGroupID(),0);
}
void CProxy_liveVizPollArray::liveVizPoll0Deposit(int wid, int ht, int bpp, int len, const byte *imageData, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int wid, int ht, int bpp, int len, const byte *imageData
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_imageData, impl_cnt_imageData;
  impl_off_imageData=impl_off=CK_ALIGN(impl_off,sizeof(byte));
  impl_off+=(impl_cnt_imageData=sizeof(byte)*(len));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|wid;
    implP|ht;
    implP|bpp;
    implP|len;
    implP|impl_off_imageData;
    implP|impl_cnt_imageData;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|wid;
    implP|ht;
    implP|bpp;
    implP|len;
    implP|impl_off_imageData;
    implP|impl_cnt_imageData;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_imageData,imageData,impl_cnt_imageData);
  CkSendMsgBranchMulti(CkIndex_liveVizPollArray::idx_liveVizPoll0Deposit_marshall4(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_liveVizPollArray::liveVizPoll0Deposit(int wid, int ht, int bpp, int len, const byte *imageData, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int wid, int ht, int bpp, int len, const byte *imageData
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_imageData, impl_cnt_imageData;
  impl_off_imageData=impl_off=CK_ALIGN(impl_off,sizeof(byte));
  impl_off+=(impl_cnt_imageData=sizeof(byte)*(len));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|wid;
    implP|ht;
    implP|bpp;
    implP|len;
    implP|impl_off_imageData;
    implP|impl_cnt_imageData;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|wid;
    implP|ht;
    implP|bpp;
    implP|len;
    implP|impl_off_imageData;
    implP|impl_cnt_imageData;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_imageData,imageData,impl_cnt_imageData);
  CkSendMsgBranchGroup(CkIndex_liveVizPollArray::idx_liveVizPoll0Deposit_marshall4(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_liveVizPollArray::reg_liveVizPoll0Deposit_marshall4() {
  int epidx = CkRegisterEp("liveVizPoll0Deposit(int wid, int ht, int bpp, int len, const byte *imageData)",
      reinterpret_cast<CkCallFnPtr>(_call_liveVizPoll0Deposit_marshall4), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_liveVizPoll0Deposit_marshall4);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_liveVizPoll0Deposit_marshall4);

  return epidx;
}

void CkIndex_liveVizPollArray::_call_liveVizPoll0Deposit_marshall4(void* impl_msg, void* impl_obj_void)
{
  liveVizPollArray* impl_obj = static_cast<liveVizPollArray*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int wid, int ht, int bpp, int len, const byte *imageData*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> wid;
  implP|wid;
  PUP::detail::TemporaryObjectHolder<int> ht;
  implP|ht;
  PUP::detail::TemporaryObjectHolder<int> bpp;
  implP|bpp;
  PUP::detail::TemporaryObjectHolder<int> len;
  implP|len;
  int impl_off_imageData, impl_cnt_imageData;
  implP|impl_off_imageData;
  implP|impl_cnt_imageData;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  byte *imageData=(byte *)(impl_buf+impl_off_imageData);
  impl_obj->liveVizPoll0Deposit(std::move(wid.t), std::move(ht.t), std::move(bpp.t), std::move(len.t), imageData);
}
int CkIndex_liveVizPollArray::_callmarshall_liveVizPoll0Deposit_marshall4(char* impl_buf, void* impl_obj_void) {
  liveVizPollArray* impl_obj = static_cast<liveVizPollArray*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int wid, int ht, int bpp, int len, const byte *imageData*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> wid;
  implP|wid;
  PUP::detail::TemporaryObjectHolder<int> ht;
  implP|ht;
  PUP::detail::TemporaryObjectHolder<int> bpp;
  implP|bpp;
  PUP::detail::TemporaryObjectHolder<int> len;
  implP|len;
  int impl_off_imageData, impl_cnt_imageData;
  implP|impl_off_imageData;
  implP|impl_cnt_imageData;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  byte *imageData=(byte *)(impl_buf+impl_off_imageData);
  impl_obj->liveVizPoll0Deposit(std::move(wid.t), std::move(ht.t), std::move(bpp.t), std::move(len.t), imageData);
  return implP.size();
}
void CkIndex_liveVizPollArray::_marshallmessagepup_liveVizPoll0Deposit_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int wid, int ht, int bpp, int len, const byte *imageData*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> wid;
  implP|wid;
  PUP::detail::TemporaryObjectHolder<int> ht;
  implP|ht;
  PUP::detail::TemporaryObjectHolder<int> bpp;
  implP|bpp;
  PUP::detail::TemporaryObjectHolder<int> len;
  implP|len;
  int impl_off_imageData, impl_cnt_imageData;
  implP|impl_off_imageData;
  implP|impl_cnt_imageData;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  byte *imageData=(byte *)(impl_buf+impl_off_imageData);
  if (implDestP.hasComments()) implDestP.comment("wid");
  implDestP|wid;
  if (implDestP.hasComments()) implDestP.comment("ht");
  implDestP|ht;
  if (implDestP.hasComments()) implDestP.comment("bpp");
  implDestP|bpp;
  if (implDestP.hasComments()) implDestP.comment("len");
  implDestP|len;
  if (implDestP.hasComments()) implDestP.comment("imageData");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*imageData))<impl_cnt_imageData;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|imageData[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
}
PUPable_def(SINGLE_ARG(Closure_liveVizPollArray::liveVizPoll0Deposit_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: liveVizPollArray();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void combine(CkReductionMsg* impl_msg);
 */
void CProxySection_liveVizPollArray::combine(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_liveVizPollArray::idx_combine_CkReductionMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_liveVizPollArray::idx_combine_CkReductionMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void request(liveVizRequestMsg* impl_msg);
 */
void CProxySection_liveVizPollArray::request(liveVizRequestMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_liveVizPollArray::idx_request_liveVizRequestMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_liveVizPollArray::idx_request_liveVizRequestMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void liveVizPoll0Deposit(int wid, int ht, int bpp, int len, const byte *imageData);
 */
void CProxySection_liveVizPollArray::liveVizPoll0Deposit(int wid, int ht, int bpp, int len, const byte *imageData, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int wid, int ht, int bpp, int len, const byte *imageData
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_imageData, impl_cnt_imageData;
  impl_off_imageData=impl_off=CK_ALIGN(impl_off,sizeof(byte));
  impl_off+=(impl_cnt_imageData=sizeof(byte)*(len));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|wid;
    implP|ht;
    implP|bpp;
    implP|len;
    implP|impl_off_imageData;
    implP|impl_cnt_imageData;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|wid;
    implP|ht;
    implP|bpp;
    implP|len;
    implP|impl_off_imageData;
    implP|impl_cnt_imageData;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_imageData,imageData,impl_cnt_imageData);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_liveVizPollArray::idx_liveVizPoll0Deposit_marshall4(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_liveVizPollArray::idx_liveVizPoll0Deposit_marshall4(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_liveVizPollArray::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,liveVizPollArray::isIrreducible());
  // REG: liveVizPollArray();
  idx_liveVizPollArray_void();
  CkRegisterDefaultCtor(__idx, idx_liveVizPollArray_void());

  // REG: void combine(CkReductionMsg* impl_msg);
  idx_combine_CkReductionMsg();
  idx_redn_wrapper_combine_CkReductionMsg();

  // REG: void request(liveVizRequestMsg* impl_msg);
  idx_request_liveVizRequestMsg();

  // REG: void liveVizPoll0Deposit(int wid, int ht, int bpp, int len, const byte *imageData);
  idx_liveVizPoll0Deposit_marshall4();

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerliveVizPoll(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  CkRegisterReadonly("myGroupProxy","CProxy_liveVizPollArray",sizeof(myGroupProxy),(void *) &myGroupProxy,__xlater_roPup_myGroupProxy);

/* REG: group liveVizPollArray: IrrGroup{
liveVizPollArray();
void combine(CkReductionMsg* impl_msg);
void request(liveVizRequestMsg* impl_msg);
void liveVizPoll0Deposit(int wid, int ht, int bpp, int len, const byte *imageData);
};
*/
  CkIndex_liveVizPollArray::__register("liveVizPollArray", sizeof(liveVizPollArray));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_liveVizPollArray::virtual_pup(PUP::er &p) {
    recursive_pup<liveVizPollArray>(dynamic_cast<liveVizPollArray*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
