
/* ---------------- method closures -------------- */
#ifdef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifdef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
template <class dtype> 

    struct Closure_MeshStreamer <dtype> ::flushDirect_3_closure : public SDAG::Closure {
      

      flushDirect_3_closure() {
        init();
      }
      flushDirect_3_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~flushDirect_3_closure() {
      }
      PUPable_decl_template(SINGLE_ARG(flushDirect_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: template <class dtype> message MeshStreamerMessage{
int destinationPes[];
dtype data[];
}
;
 */
#ifdef CK_TEMPLATES_ONLY
template <class dtype>  void *CMessage_MeshStreamerMessage <dtype> ::operator new(size_t s){
  return MeshStreamerMessage <dtype> ::alloc(__idx, s, 0, 0, GroupDepNum{});
}
template <class dtype>  void *CMessage_MeshStreamerMessage <dtype> ::operator new(size_t s, int* sz){
  return MeshStreamerMessage <dtype> ::alloc(__idx, s, sz, 0, GroupDepNum{});
}
template <class dtype>  void *CMessage_MeshStreamerMessage <dtype> ::operator new(size_t s, int* sz,const int pb){
  return MeshStreamerMessage <dtype> ::alloc(__idx, s, sz, pb, GroupDepNum{});
}
template <class dtype>  void *CMessage_MeshStreamerMessage <dtype> ::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return MeshStreamerMessage <dtype> ::alloc(__idx, s, sz, pb, groupDepNum);
}
template <class dtype>  void *CMessage_MeshStreamerMessage <dtype> ::operator new(size_t s, int sz0, int sz1) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return MeshStreamerMessage <dtype> ::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
template <class dtype>  void *CMessage_MeshStreamerMessage <dtype> ::operator new(size_t s, int sz0, int sz1, const int p) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return MeshStreamerMessage <dtype> ::alloc(__idx, s, sizes, p, GroupDepNum{});
}
template <class dtype>  void *CMessage_MeshStreamerMessage <dtype> ::operator new(size_t s, int sz0, int sz1, const int p, const GroupDepNum groupDepNum) {
  int sizes[2];
  sizes[0] = sz0;
  sizes[1] = sz1;
  return MeshStreamerMessage <dtype> ::alloc(__idx, s, sizes, p, groupDepNum);
}
template <class dtype>  void* CMessage_MeshStreamerMessage <dtype> ::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(int)*sizes[0]);
  if(sizes==0)
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[2] = CkpvAccess(_offsets)[1] + ALIGN_DEFAULT(sizeof(dtype)*sizes[1]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[2], pb, groupDepNum);
}
template <class dtype>  CMessage_MeshStreamerMessage <dtype> ::CMessage_MeshStreamerMessage() {
MeshStreamerMessage <dtype>  *newmsg = (MeshStreamerMessage <dtype>  *)this;
  newmsg->destinationPes = (int *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
  newmsg->data = (dtype *) ((char *)newmsg + CkpvAccess(_offsets)[1]);
}
template <class dtype>  void CMessage_MeshStreamerMessage <dtype> ::dealloc(void *p) {
  CkFreeMsg(p);
}
template <class dtype>  void* CMessage_MeshStreamerMessage <dtype> ::pack(MeshStreamerMessage <dtype>  *msg) {
  msg->destinationPes = (int *) ((char *)msg->destinationPes - (char *)msg);
  msg->data = (dtype *) ((char *)msg->data - (char *)msg);
  return (void *) msg;
}
template <class dtype>  MeshStreamerMessage <dtype> * CMessage_MeshStreamerMessage <dtype> ::unpack(void* buf) {
  MeshStreamerMessage <dtype>  *msg = (MeshStreamerMessage <dtype>  *) buf;
  msg->destinationPes = (int *) ((size_t)msg->destinationPes + (char *)msg);
  msg->data = (dtype *) ((size_t)msg->data + (char *)msg);
  return msg;
}
template <class dtype>  int CMessage_MeshStreamerMessage <dtype> ::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: template <class dtype> group MeshStreamerClient: IrrGroup{
void receiveCombinedData(MeshStreamerMessage<dtype>* impl_msg);
};
 */
#ifdef CK_TEMPLATES_ONLY
template <class dtype>  int CkIndex_MeshStreamerClient <dtype> ::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifdef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifdef CK_TEMPLATES_ONLY
/* DEFS: void receiveCombinedData(MeshStreamerMessage<dtype>* impl_msg);
 */
template <class dtype> 
void CProxyElement_MeshStreamerClient <dtype> ::receiveCombinedData(MeshStreamerMessage<dtype>* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MeshStreamerClient <dtype> ::idx_receiveCombinedData_MeshStreamerMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_MeshStreamerClient <dtype> ::idx_receiveCombinedData_MeshStreamerMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_MeshStreamerClient <dtype> ::idx_receiveCombinedData_MeshStreamerMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void receiveCombinedData(MeshStreamerMessage<dtype>* impl_msg);
 */
template <class dtype> 
void CProxy_MeshStreamerClient <dtype> ::receiveCombinedData(MeshStreamerMessage<dtype>* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MeshStreamerClient <dtype> ::idx_receiveCombinedData_MeshStreamerMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_MeshStreamerClient <dtype> ::idx_receiveCombinedData_MeshStreamerMessage(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_MeshStreamerClient <dtype> ::idx_receiveCombinedData_MeshStreamerMessage(), impl_msg, ckGetGroupID(),0);
}
template <class dtype> 
void CProxy_MeshStreamerClient <dtype> ::receiveCombinedData(MeshStreamerMessage<dtype>* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_MeshStreamerClient <dtype> ::idx_receiveCombinedData_MeshStreamerMessage(), impl_msg, ckGetGroupID(), npes, pes,0);
}
template <class dtype> 
void CProxy_MeshStreamerClient <dtype> ::receiveCombinedData(MeshStreamerMessage<dtype>* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_MeshStreamerClient <dtype> ::idx_receiveCombinedData_MeshStreamerMessage(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
template <class dtype> 
int CkIndex_MeshStreamerClient <dtype> ::reg_receiveCombinedData_MeshStreamerMessage() {
  int epidx = CkRegisterEp("receiveCombinedData(MeshStreamerMessage<dtype>* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_receiveCombinedData_MeshStreamerMessage), CMessage_MeshStreamerMessage<dtype>::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)MeshStreamerMessage<dtype>::ckDebugPup);
  return epidx;
}

template <class dtype> 
void CkIndex_MeshStreamerClient <dtype> ::_call_receiveCombinedData_MeshStreamerMessage(void* impl_msg, void* impl_obj_void)
{
  MeshStreamerClient <dtype> * impl_obj = static_cast<MeshStreamerClient <dtype> *>(impl_obj_void);
  impl_obj->receiveCombinedData((MeshStreamerMessage<dtype>*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void receiveCombinedData(MeshStreamerMessage<dtype>* impl_msg);
 */
template <class dtype> 
void CProxySection_MeshStreamerClient <dtype> ::receiveCombinedData(MeshStreamerMessage<dtype>* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_MeshStreamerClient <dtype> ::idx_receiveCombinedData_MeshStreamerMessage(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_MeshStreamerClient <dtype> ::idx_receiveCombinedData_MeshStreamerMessage(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifdef CK_TEMPLATES_ONLY
template <class dtype> void CkIndex_MeshStreamerClient <dtype> ::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,MeshStreamerClient <dtype> ::isIrreducible());
  // REG: void receiveCombinedData(MeshStreamerMessage<dtype>* impl_msg);
  idx_receiveCombinedData_MeshStreamerMessage();

}
#endif /* CK_TEMPLATES_ONLY */
#ifdef CK_TEMPLATES_ONLY
template <class dtype> 
struct CBase_MeshStreamerClient : public Group, virtual CBase
 {
  CProxy_MeshStreamerClient <dtype>  thisProxy;
  CBase_MeshStreamerClient() : thisProxy(this)
    , Group()
  { }
  CBase_MeshStreamerClient(CkMigrateMessage* m) : thisProxy(this)
    , Group(m)  { }
  template <typename... Args>
  CBase_MeshStreamerClient(Args... args) : thisProxy(this)
    , Group(args...)  { }
  void pup(PUP::er &p) { }
  void _sdag_pup(PUP::er &p) { }
  void virtual_pup(PUP::er &p) {
    recursive_pup<MeshStreamerClient <dtype> >(dynamic_cast<MeshStreamerClient <dtype> *>(this), p);
}
  void parent_pup(PUP::er &p) {
    recursive_pup<Group>(this, p);
    p|thisProxy;
  }
};
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: template <class dtype> group MeshStreamer: IrrGroup{
MeshStreamer(int totalBufferCapacity, int numRows, int numColumns, int numPlanes, const CProxy_MeshStreamerClient<dtype> &clientProxy, int yieldFlag, double progressPeriodInMs);
void receiveAggregateData(MeshStreamerMessage<dtype>* impl_msg);
void flushDirect();
void finish(CkReductionMsg* impl_msg);
};
 */
#ifdef CK_TEMPLATES_ONLY
template <class dtype>  int CkIndex_MeshStreamer <dtype> ::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifdef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifdef CK_TEMPLATES_ONLY
/* DEFS: MeshStreamer(int totalBufferCapacity, int numRows, int numColumns, int numPlanes, const CProxy_MeshStreamerClient<dtype> &clientProxy, int yieldFlag, double progressPeriodInMs);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void receiveAggregateData(MeshStreamerMessage<dtype>* impl_msg);
 */
template <class dtype> 
void CProxyElement_MeshStreamer <dtype> ::receiveAggregateData(MeshStreamerMessage<dtype>* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MeshStreamer <dtype> ::idx_receiveAggregateData_MeshStreamerMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_MeshStreamer <dtype> ::idx_receiveAggregateData_MeshStreamerMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_MeshStreamer <dtype> ::idx_receiveAggregateData_MeshStreamerMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void flushDirect();
 */
template <class dtype> 
void CProxyElement_MeshStreamer <dtype> ::flushDirect(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MeshStreamer <dtype> ::idx_flushDirect_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_MeshStreamer <dtype> ::idx_flushDirect_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_MeshStreamer <dtype> ::idx_flushDirect_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void finish(CkReductionMsg* impl_msg);
 */
template <class dtype> 
void CProxyElement_MeshStreamer <dtype> ::finish(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MeshStreamer <dtype> ::idx_finish_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_MeshStreamer <dtype> ::idx_finish_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_MeshStreamer <dtype> ::idx_finish_CkReductionMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: MeshStreamer(int totalBufferCapacity, int numRows, int numColumns, int numPlanes, const CProxy_MeshStreamerClient<dtype> &clientProxy, int yieldFlag, double progressPeriodInMs);
 */
template <class dtype> 
CkGroupID CProxy_MeshStreamer <dtype> ::ckNew(int totalBufferCapacity, int numRows, int numColumns, int numPlanes, const CProxy_MeshStreamerClient<dtype> &clientProxy, int yieldFlag, double progressPeriodInMs, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int totalBufferCapacity, int numRows, int numColumns, int numPlanes, const CProxy_MeshStreamerClient<dtype> &clientProxy, int yieldFlag, double progressPeriodInMs
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|totalBufferCapacity;
    implP|numRows;
    implP|numColumns;
    implP|numPlanes;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_MeshStreamerClient<dtype>>::type>::type &)clientProxy;
    implP|yieldFlag;
    implP|progressPeriodInMs;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|totalBufferCapacity;
    implP|numRows;
    implP|numColumns;
    implP|numPlanes;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_MeshStreamerClient<dtype>>::type>::type &)clientProxy;
    implP|yieldFlag;
    implP|progressPeriodInMs;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_MeshStreamer <dtype> ::__idx, CkIndex_MeshStreamer <dtype> ::idx_MeshStreamer_marshall1(), impl_msg);
  return gId;
}
template <class dtype> 
  CProxy_MeshStreamer <dtype> ::CProxy_MeshStreamer(int totalBufferCapacity, int numRows, int numColumns, int numPlanes, const CProxy_MeshStreamerClient<dtype> &clientProxy, int yieldFlag, double progressPeriodInMs, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int totalBufferCapacity, int numRows, int numColumns, int numPlanes, const CProxy_MeshStreamerClient<dtype> &clientProxy, int yieldFlag, double progressPeriodInMs
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|totalBufferCapacity;
    implP|numRows;
    implP|numColumns;
    implP|numPlanes;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_MeshStreamerClient<dtype>>::type>::type &)clientProxy;
    implP|yieldFlag;
    implP|progressPeriodInMs;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|totalBufferCapacity;
    implP|numRows;
    implP|numColumns;
    implP|numPlanes;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_MeshStreamerClient<dtype>>::type>::type &)clientProxy;
    implP|yieldFlag;
    implP|progressPeriodInMs;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  ckSetGroupID(CkCreateGroup(CkIndex_MeshStreamer <dtype> ::__idx, CkIndex_MeshStreamer <dtype> ::idx_MeshStreamer_marshall1(), impl_msg));
}

// Entry point registration function
template <class dtype> 
int CkIndex_MeshStreamer <dtype> ::reg_MeshStreamer_marshall1() {
  int epidx = CkRegisterEp("MeshStreamer(int totalBufferCapacity, int numRows, int numColumns, int numPlanes, const CProxy_MeshStreamerClient<dtype> &clientProxy, int yieldFlag, double progressPeriodInMs)",
      reinterpret_cast<CkCallFnPtr>(_call_MeshStreamer_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_MeshStreamer_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_MeshStreamer_marshall1);

  return epidx;
}

template <class dtype> 
void CkIndex_MeshStreamer <dtype> ::_call_MeshStreamer_marshall1(void* impl_msg, void* impl_obj_void)
{
  MeshStreamer <dtype> * impl_obj = static_cast<MeshStreamer <dtype> *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int totalBufferCapacity, int numRows, int numColumns, int numPlanes, const CProxy_MeshStreamerClient<dtype> &clientProxy, int yieldFlag, double progressPeriodInMs*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> totalBufferCapacity;
  implP|totalBufferCapacity;
  PUP::detail::TemporaryObjectHolder<int> numRows;
  implP|numRows;
  PUP::detail::TemporaryObjectHolder<int> numColumns;
  implP|numColumns;
  PUP::detail::TemporaryObjectHolder<int> numPlanes;
  implP|numPlanes;
  PUP::detail::TemporaryObjectHolder<CProxy_MeshStreamerClient<dtype>> clientProxy;
  implP|clientProxy;
  PUP::detail::TemporaryObjectHolder<int> yieldFlag;
  implP|yieldFlag;
  PUP::detail::TemporaryObjectHolder<double> progressPeriodInMs;
  implP|progressPeriodInMs;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) MeshStreamer <dtype> (std::move(totalBufferCapacity.t), std::move(numRows.t), std::move(numColumns.t), std::move(numPlanes.t), std::move(clientProxy.t), std::move(yieldFlag.t), std::move(progressPeriodInMs.t));
}
template <class dtype> 
int CkIndex_MeshStreamer <dtype> ::_callmarshall_MeshStreamer_marshall1(char* impl_buf, void* impl_obj_void) {
  MeshStreamer <dtype> * impl_obj = static_cast<MeshStreamer <dtype> *>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int totalBufferCapacity, int numRows, int numColumns, int numPlanes, const CProxy_MeshStreamerClient<dtype> &clientProxy, int yieldFlag, double progressPeriodInMs*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> totalBufferCapacity;
  implP|totalBufferCapacity;
  PUP::detail::TemporaryObjectHolder<int> numRows;
  implP|numRows;
  PUP::detail::TemporaryObjectHolder<int> numColumns;
  implP|numColumns;
  PUP::detail::TemporaryObjectHolder<int> numPlanes;
  implP|numPlanes;
  PUP::detail::TemporaryObjectHolder<CProxy_MeshStreamerClient<dtype>> clientProxy;
  implP|clientProxy;
  PUP::detail::TemporaryObjectHolder<int> yieldFlag;
  implP|yieldFlag;
  PUP::detail::TemporaryObjectHolder<double> progressPeriodInMs;
  implP|progressPeriodInMs;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) MeshStreamer <dtype> (std::move(totalBufferCapacity.t), std::move(numRows.t), std::move(numColumns.t), std::move(numPlanes.t), std::move(clientProxy.t), std::move(yieldFlag.t), std::move(progressPeriodInMs.t));
  return implP.size();
}
template <class dtype> 
void CkIndex_MeshStreamer <dtype> ::_marshallmessagepup_MeshStreamer_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int totalBufferCapacity, int numRows, int numColumns, int numPlanes, const CProxy_MeshStreamerClient<dtype> &clientProxy, int yieldFlag, double progressPeriodInMs*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> totalBufferCapacity;
  implP|totalBufferCapacity;
  PUP::detail::TemporaryObjectHolder<int> numRows;
  implP|numRows;
  PUP::detail::TemporaryObjectHolder<int> numColumns;
  implP|numColumns;
  PUP::detail::TemporaryObjectHolder<int> numPlanes;
  implP|numPlanes;
  PUP::detail::TemporaryObjectHolder<CProxy_MeshStreamerClient<dtype>> clientProxy;
  implP|clientProxy;
  PUP::detail::TemporaryObjectHolder<int> yieldFlag;
  implP|yieldFlag;
  PUP::detail::TemporaryObjectHolder<double> progressPeriodInMs;
  implP|progressPeriodInMs;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("totalBufferCapacity");
  implDestP|totalBufferCapacity;
  if (implDestP.hasComments()) implDestP.comment("numRows");
  implDestP|numRows;
  if (implDestP.hasComments()) implDestP.comment("numColumns");
  implDestP|numColumns;
  if (implDestP.hasComments()) implDestP.comment("numPlanes");
  implDestP|numPlanes;
  if (implDestP.hasComments()) implDestP.comment("clientProxy");
  implDestP|clientProxy;
  if (implDestP.hasComments()) implDestP.comment("yieldFlag");
  implDestP|yieldFlag;
  if (implDestP.hasComments()) implDestP.comment("progressPeriodInMs");
  implDestP|progressPeriodInMs;
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void receiveAggregateData(MeshStreamerMessage<dtype>* impl_msg);
 */
template <class dtype> 
void CProxy_MeshStreamer <dtype> ::receiveAggregateData(MeshStreamerMessage<dtype>* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MeshStreamer <dtype> ::idx_receiveAggregateData_MeshStreamerMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_MeshStreamer <dtype> ::idx_receiveAggregateData_MeshStreamerMessage(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_MeshStreamer <dtype> ::idx_receiveAggregateData_MeshStreamerMessage(), impl_msg, ckGetGroupID(),0);
}
template <class dtype> 
void CProxy_MeshStreamer <dtype> ::receiveAggregateData(MeshStreamerMessage<dtype>* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_MeshStreamer <dtype> ::idx_receiveAggregateData_MeshStreamerMessage(), impl_msg, ckGetGroupID(), npes, pes,0);
}
template <class dtype> 
void CProxy_MeshStreamer <dtype> ::receiveAggregateData(MeshStreamerMessage<dtype>* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_MeshStreamer <dtype> ::idx_receiveAggregateData_MeshStreamerMessage(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
template <class dtype> 
int CkIndex_MeshStreamer <dtype> ::reg_receiveAggregateData_MeshStreamerMessage() {
  int epidx = CkRegisterEp("receiveAggregateData(MeshStreamerMessage<dtype>* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_receiveAggregateData_MeshStreamerMessage), CMessage_MeshStreamerMessage<dtype>::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)MeshStreamerMessage<dtype>::ckDebugPup);
  return epidx;
}

template <class dtype> 
void CkIndex_MeshStreamer <dtype> ::_call_receiveAggregateData_MeshStreamerMessage(void* impl_msg, void* impl_obj_void)
{
  MeshStreamer <dtype> * impl_obj = static_cast<MeshStreamer <dtype> *>(impl_obj_void);
  impl_obj->receiveAggregateData((MeshStreamerMessage<dtype>*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void flushDirect();
 */
template <class dtype> 
void CProxy_MeshStreamer <dtype> ::flushDirect(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MeshStreamer <dtype> ::idx_flushDirect_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_MeshStreamer <dtype> ::idx_flushDirect_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_MeshStreamer <dtype> ::idx_flushDirect_void(), impl_msg, ckGetGroupID(),0);
}
template <class dtype> 
void CProxy_MeshStreamer <dtype> ::flushDirect(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_MeshStreamer <dtype> ::idx_flushDirect_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
template <class dtype> 
void CProxy_MeshStreamer <dtype> ::flushDirect(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_MeshStreamer <dtype> ::idx_flushDirect_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
template <class dtype> 
int CkIndex_MeshStreamer <dtype> ::reg_flushDirect_void() {
  int epidx = CkRegisterEp("flushDirect()",
      reinterpret_cast<CkCallFnPtr>(_call_flushDirect_void), 0, __idx, 0);
  return epidx;
}

template <class dtype> 
void CkIndex_MeshStreamer <dtype> ::_call_flushDirect_void(void* impl_msg, void* impl_obj_void)
{
  MeshStreamer <dtype> * impl_obj = static_cast<MeshStreamer <dtype> *>(impl_obj_void);
  impl_obj->flushDirect();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
template <class dtype> PUPable_def_template_nonInst(SINGLE_ARG(Closure_MeshStreamer <dtype> ::flushDirect_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void finish(CkReductionMsg* impl_msg);
 */
template <class dtype> 
void CProxy_MeshStreamer <dtype> ::finish(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_MeshStreamer <dtype> ::idx_finish_CkReductionMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_MeshStreamer <dtype> ::idx_finish_CkReductionMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_MeshStreamer <dtype> ::idx_finish_CkReductionMsg(), impl_msg, ckGetGroupID(),0);
}
template <class dtype> 
void CProxy_MeshStreamer <dtype> ::finish(CkReductionMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_MeshStreamer <dtype> ::idx_finish_CkReductionMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
template <class dtype> 
void CProxy_MeshStreamer <dtype> ::finish(CkReductionMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_MeshStreamer <dtype> ::idx_finish_CkReductionMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
template <class dtype> 
int CkIndex_MeshStreamer <dtype> ::reg_finish_CkReductionMsg() {
  int epidx = CkRegisterEp("finish(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_finish_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}

template <class dtype> 
void CkIndex_MeshStreamer <dtype> ::_call_finish_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  MeshStreamer <dtype> * impl_obj = static_cast<MeshStreamer <dtype> *>(impl_obj_void);
  impl_obj->finish((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: MeshStreamer(int totalBufferCapacity, int numRows, int numColumns, int numPlanes, const CProxy_MeshStreamerClient<dtype> &clientProxy, int yieldFlag, double progressPeriodInMs);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void receiveAggregateData(MeshStreamerMessage<dtype>* impl_msg);
 */
template <class dtype> 
void CProxySection_MeshStreamer <dtype> ::receiveAggregateData(MeshStreamerMessage<dtype>* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_MeshStreamer <dtype> ::idx_receiveAggregateData_MeshStreamerMessage(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_MeshStreamer <dtype> ::idx_receiveAggregateData_MeshStreamerMessage(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void flushDirect();
 */
template <class dtype> 
void CProxySection_MeshStreamer <dtype> ::flushDirect(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_MeshStreamer <dtype> ::idx_flushDirect_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_MeshStreamer <dtype> ::idx_flushDirect_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
/* DEFS: void finish(CkReductionMsg* impl_msg);
 */
template <class dtype> 
void CProxySection_MeshStreamer <dtype> ::finish(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_MeshStreamer <dtype> ::idx_finish_CkReductionMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_MeshStreamer <dtype> ::idx_finish_CkReductionMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifdef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifdef CK_TEMPLATES_ONLY
template <class dtype> void CkIndex_MeshStreamer <dtype> ::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,MeshStreamer <dtype> ::isIrreducible());
  // REG: MeshStreamer(int totalBufferCapacity, int numRows, int numColumns, int numPlanes, const CProxy_MeshStreamerClient<dtype> &clientProxy, int yieldFlag, double progressPeriodInMs);
  idx_MeshStreamer_marshall1();

  // REG: void receiveAggregateData(MeshStreamerMessage<dtype>* impl_msg);
  idx_receiveAggregateData_MeshStreamerMessage();

  // REG: void flushDirect();
  idx_flushDirect_void();

  // REG: void finish(CkReductionMsg* impl_msg);
  idx_finish_CkReductionMsg();

}
#endif /* CK_TEMPLATES_ONLY */
#ifdef CK_TEMPLATES_ONLY
template <class dtype> 
struct CBase_MeshStreamer : public Group, virtual CBase
 {
  CProxy_MeshStreamer <dtype>  thisProxy;
  CBase_MeshStreamer() : thisProxy(this)
    , Group()
  { }
  CBase_MeshStreamer(CkMigrateMessage* m) : thisProxy(this)
    , Group(m)  { }
  template <typename... Args>
  CBase_MeshStreamer(Args... args) : thisProxy(this)
    , Group(args...)  { }
  void pup(PUP::er &p) { }
  void _sdag_pup(PUP::er &p) { }
  void virtual_pup(PUP::er &p) {
    recursive_pup<MeshStreamer <dtype> >(dynamic_cast<MeshStreamer <dtype> *>(this), p);
}
  void parent_pup(PUP::er &p) {
    recursive_pup<Group>(this, p);
    p|thisProxy;
  }
};
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerMeshStreamer(void)
{
  static int _done = 0; if(_done) return; _done = 1;



}
#endif /* CK_TEMPLATES_ONLY */
