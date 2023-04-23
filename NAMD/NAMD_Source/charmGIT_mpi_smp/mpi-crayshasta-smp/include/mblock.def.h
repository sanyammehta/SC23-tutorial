


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: message MBlockDataMsg{
unsigned char data[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_MBlockDataMsg::operator new(size_t s){
  return MBlockDataMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_MBlockDataMsg::operator new(size_t s, int* sz){
  return MBlockDataMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_MBlockDataMsg::operator new(size_t s, int* sz,const int pb){
  return MBlockDataMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_MBlockDataMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return MBlockDataMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_MBlockDataMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return MBlockDataMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_MBlockDataMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return MBlockDataMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_MBlockDataMsg::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return MBlockDataMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_MBlockDataMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(unsigned char)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_MBlockDataMsg::CMessage_MBlockDataMsg() {
MBlockDataMsg *newmsg = (MBlockDataMsg *)this;
  newmsg->data = (unsigned char *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_MBlockDataMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_MBlockDataMsg::pack(MBlockDataMsg *msg) {
  msg->data = (unsigned char *) ((char *)msg->data - (char *)msg);
  return (void *) msg;
}
MBlockDataMsg* CMessage_MBlockDataMsg::unpack(void* buf) {
  MBlockDataMsg *msg = (MBlockDataMsg *) buf;
  msg->data = (unsigned char *) ((size_t)msg->data + (char *)msg);
  return msg;
}
int CMessage_MBlockDataMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: array MBlockChunk: ArrayElement{
MBlockChunk(const CkArrayID &threads);
void recv(MBlockDataMsg* impl_msg);
void reductionResult(CkReductionMsg* impl_msg);
MBlockChunk(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_MBlockChunk::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_MBlockChunk::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_MBlockChunk::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_MBlockChunk::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_MBlockChunk::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_MBlockChunk::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_MBlockChunk::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: MBlockChunk(const CkArrayID &threads);
 */
void CProxyElement_MBlockChunk::insert(const CkArrayID &threads, int onPE, const CkEntryOptions *impl_e_opts)
{ 
   //Marshall: const CkArrayID &threads
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)threads;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)threads;
  }
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_MBlockChunk::idx_MBlockChunk_marshall1(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recv(MBlockDataMsg* impl_msg);
 */
void CProxyElement_MBlockChunk::recv(MBlockDataMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MBlockChunk::idx_recv_MBlockDataMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reductionResult(CkReductionMsg* impl_msg);
 */
void CProxyElement_MBlockChunk::reductionResult(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MBlockChunk::idx_reductionResult_CkReductionMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MBlockChunk(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MBlockChunk(const CkArrayID &threads);
 */
CkArrayID CProxy_MBlockChunk::ckNew(const CkArrayID &threads, const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkArrayID &threads
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)threads;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)threads;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_MBlockChunk::idx_MBlockChunk_marshall1(), opts);
  return gId;
}
void CProxy_MBlockChunk::ckNew(const CkArrayID &threads, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkArrayID &threads
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)threads;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)threads;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_MBlockChunk::idx_MBlockChunk_marshall1(), _ck_array_creation_cb, opts, impl_msg);
}
CkArrayID CProxy_MBlockChunk::ckNew(const CkArrayID &threads, const int s1, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkArrayID &threads
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)threads;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)threads;
  }
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_MBlockChunk::idx_MBlockChunk_marshall1(), opts);
  return gId;
}
void CProxy_MBlockChunk::ckNew(const CkArrayID &threads, const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkArrayID &threads
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)threads;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayID>::type>::type &)threads;
  }
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_MBlockChunk::idx_MBlockChunk_marshall1(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_MBlockChunk::reg_MBlockChunk_marshall1() {
  int epidx = CkRegisterEp("MBlockChunk(const CkArrayID &threads)",
      reinterpret_cast<CkCallFnPtr>(_call_MBlockChunk_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_MBlockChunk_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_MBlockChunk_marshall1);

  return epidx;
}

void CkIndex_MBlockChunk::_call_MBlockChunk_marshall1(void* impl_msg, void* impl_obj_void)
{
  MBlockChunk* impl_obj = static_cast<MBlockChunk*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkArrayID &threads*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayID> threads;
  implP|threads;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) MBlockChunk(std::move(threads.t));
}
int CkIndex_MBlockChunk::_callmarshall_MBlockChunk_marshall1(char* impl_buf, void* impl_obj_void) {
  MBlockChunk* impl_obj = static_cast<MBlockChunk*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkArrayID &threads*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayID> threads;
  implP|threads;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) MBlockChunk(std::move(threads.t));
  return implP.size();
}
void CkIndex_MBlockChunk::_marshallmessagepup_MBlockChunk_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkArrayID &threads*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayID> threads;
  implP|threads;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("threads");
  implDestP|threads;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recv(MBlockDataMsg* impl_msg);
 */
void CProxy_MBlockChunk::recv(MBlockDataMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_MBlockChunk::idx_recv_MBlockDataMsg(),0);
}

// Entry point registration function
int CkIndex_MBlockChunk::reg_recv_MBlockDataMsg() {
  int epidx = CkRegisterEp("recv(MBlockDataMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recv_MBlockDataMsg), CMessage_MBlockDataMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)MBlockDataMsg::ckDebugPup);
  return epidx;
}

void CkIndex_MBlockChunk::_call_recv_MBlockDataMsg(void* impl_msg, void* impl_obj_void)
{
  MBlockChunk* impl_obj = static_cast<MBlockChunk*>(impl_obj_void);
  impl_obj->recv((MBlockDataMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reductionResult(CkReductionMsg* impl_msg);
 */
void CProxy_MBlockChunk::reductionResult(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_MBlockChunk::idx_reductionResult_CkReductionMsg(),0);
}

// Entry point registration function
int CkIndex_MBlockChunk::reg_reductionResult_CkReductionMsg() {
  int epidx = CkRegisterEp("reductionResult(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_reductionResult_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}

void CkIndex_MBlockChunk::_call_reductionResult_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  MBlockChunk* impl_obj = static_cast<MBlockChunk*>(impl_obj_void);
  impl_obj->reductionResult((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MBlockChunk(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_MBlockChunk::reg_MBlockChunk_CkMigrateMessage() {
  int epidx = CkRegisterEp("MBlockChunk(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_MBlockChunk_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_MBlockChunk::_call_MBlockChunk_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<MBlockChunk> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MBlockChunk(const CkArrayID &threads);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recv(MBlockDataMsg* impl_msg);
 */
void CProxySection_MBlockChunk::recv(MBlockDataMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MBlockChunk::idx_recv_MBlockDataMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reductionResult(CkReductionMsg* impl_msg);
 */
void CProxySection_MBlockChunk::reductionResult(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_MBlockChunk::idx_reductionResult_CkReductionMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MBlockChunk(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_MBlockChunk::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, 1);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: MBlockChunk(const CkArrayID &threads);
  idx_MBlockChunk_marshall1();

  // REG: void recv(MBlockDataMsg* impl_msg);
  idx_recv_MBlockDataMsg();

  // REG: void reductionResult(CkReductionMsg* impl_msg);
  idx_reductionResult_CkReductionMsg();

  // REG: MBlockChunk(CkMigrateMessage* impl_msg);
  idx_MBlockChunk_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_MBlockChunk_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registermblock(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message MBlockDataMsg{
unsigned char data[];
}
;
*/
CMessage_MBlockDataMsg::__register("MBlockDataMsg", sizeof(MBlockDataMsg),(CkPackFnPtr) MBlockDataMsg::pack,(CkUnpackFnPtr) MBlockDataMsg::unpack);

  _registerInitCall(MBlockProcInit,0);

  _registerInitCall(MBlockNodeInit,1);

/* REG: array MBlockChunk: ArrayElement{
MBlockChunk(const CkArrayID &threads);
void recv(MBlockDataMsg* impl_msg);
void reductionResult(CkReductionMsg* impl_msg);
MBlockChunk(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_MBlockChunk::__register("MBlockChunk", sizeof(MBlockChunk));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_MBlockChunk::virtual_pup(PUP::er &p) {
    recursive_pup<MBlockChunk>(dynamic_cast<MBlockChunk*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
