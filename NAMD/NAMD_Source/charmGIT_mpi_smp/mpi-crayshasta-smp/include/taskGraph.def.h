
/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_taskGraphArray::requestData_2_closure : public SDAG::Closure {
            CkArrayIndex from;


      requestData_2_closure() {
        init();
      }
      requestData_2_closure(CkMigrateMessage*) {
        init();
      }
            CkArrayIndex & getP0() { return from;}
      void pup(PUP::er& __p) {
        __p | from;
        packClosure(__p);
      }
      virtual ~requestData_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(requestData_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_taskGraphArray::depositData_3_closure : public SDAG::Closure {
            CkPointer<taskGraphSolver> data;


      depositData_3_closure() {
        init();
      }
      depositData_3_closure(CkMigrateMessage*) {
        init();
      }
            CkPointer<taskGraphSolver> & getP0() { return data;}
      void pup(PUP::er& __p) {
        __p | data;
        packClosure(__p);
      }
      virtual ~depositData_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(depositData_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_taskGraphArray::deleteElement_4_closure : public SDAG::Closure {
      

      deleteElement_4_closure() {
        init();
      }
      deleteElement_4_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~deleteElement_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(deleteElement_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: message callbackMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_callbackMsg::operator new(size_t s){
  return callbackMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_callbackMsg::operator new(size_t s, int* sz){
  return callbackMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_callbackMsg::operator new(size_t s, int* sz,const int pb){
  return callbackMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_callbackMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return callbackMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_callbackMsg::operator new(size_t s, const int p) {
  return callbackMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_callbackMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return callbackMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_callbackMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_callbackMsg::CMessage_callbackMsg() {
callbackMsg *newmsg = (callbackMsg *)this;
}
void CMessage_callbackMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_callbackMsg::pack(callbackMsg *msg) {
  return (void *) msg;
}
callbackMsg* CMessage_callbackMsg::unpack(void* buf) {
  callbackMsg *msg = (callbackMsg *) buf;
  return msg;
}
int CMessage_callbackMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array taskGraphArray: ArrayElement{
taskGraphArray(const CkVec<CkArrayIndex> &deps, const CkPointer<taskGraphSolver> &data, const CkCallback &returnResults);
void requestData(const CkArrayIndex &from);
void depositData(const CkPointer<taskGraphSolver> &data);
void deleteElement();
taskGraphArray(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_taskGraphArray::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_taskGraphArray::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_taskGraphArray::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_taskGraphArray::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_taskGraphArray::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_taskGraphArray::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_taskGraphArray::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: taskGraphArray(const CkVec<CkArrayIndex> &deps, const CkPointer<taskGraphSolver> &data, const CkCallback &returnResults);
 */
void CProxyElement_taskGraphArray::insert(const CkVec<CkArrayIndex> &deps, const CkPointer<taskGraphSolver> &data, const CkCallback &returnResults, int onPE, const CkEntryOptions *impl_e_opts)
{ 
   //Marshall: const CkVec<CkArrayIndex> &deps, const CkPointer<taskGraphSolver> &data, const CkCallback &returnResults
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkVec<CkArrayIndex>>::type>::type &)deps;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkPointer<taskGraphSolver>>::type>::type &)data;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)returnResults;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkVec<CkArrayIndex>>::type>::type &)deps;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkPointer<taskGraphSolver>>::type>::type &)data;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)returnResults;
  }
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_taskGraphArray::idx_taskGraphArray_marshall1(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestData(const CkArrayIndex &from);
 */
void CProxyElement_taskGraphArray::requestData(const CkArrayIndex &from, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkArrayIndex &from
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)from;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)from;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_taskGraphArray::idx_requestData_marshall2(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void depositData(const CkPointer<taskGraphSolver> &data);
 */
void CProxyElement_taskGraphArray::depositData(const CkPointer<taskGraphSolver> &data, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkPointer<taskGraphSolver> &data
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkPointer<taskGraphSolver>>::type>::type &)data;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkPointer<taskGraphSolver>>::type>::type &)data;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_taskGraphArray::idx_depositData_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void deleteElement();
 */
void CProxyElement_taskGraphArray::deleteElement(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_taskGraphArray::idx_deleteElement_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: taskGraphArray(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: taskGraphArray(const CkVec<CkArrayIndex> &deps, const CkPointer<taskGraphSolver> &data, const CkCallback &returnResults);
 */
CkArrayID CProxy_taskGraphArray::ckNew(const CkVec<CkArrayIndex> &deps, const CkPointer<taskGraphSolver> &data, const CkCallback &returnResults, const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkVec<CkArrayIndex> &deps, const CkPointer<taskGraphSolver> &data, const CkCallback &returnResults
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkVec<CkArrayIndex>>::type>::type &)deps;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkPointer<taskGraphSolver>>::type>::type &)data;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)returnResults;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkVec<CkArrayIndex>>::type>::type &)deps;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkPointer<taskGraphSolver>>::type>::type &)data;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)returnResults;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_taskGraphArray::idx_taskGraphArray_marshall1(), opts);
  return gId;
}
void CProxy_taskGraphArray::ckNew(const CkVec<CkArrayIndex> &deps, const CkPointer<taskGraphSolver> &data, const CkCallback &returnResults, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkVec<CkArrayIndex> &deps, const CkPointer<taskGraphSolver> &data, const CkCallback &returnResults
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkVec<CkArrayIndex>>::type>::type &)deps;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkPointer<taskGraphSolver>>::type>::type &)data;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)returnResults;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkVec<CkArrayIndex>>::type>::type &)deps;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkPointer<taskGraphSolver>>::type>::type &)data;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)returnResults;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_taskGraphArray::idx_taskGraphArray_marshall1(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_taskGraphArray::reg_taskGraphArray_marshall1() {
  int epidx = CkRegisterEp("taskGraphArray(const CkVec<CkArrayIndex> &deps, const CkPointer<taskGraphSolver> &data, const CkCallback &returnResults)",
      reinterpret_cast<CkCallFnPtr>(_call_taskGraphArray_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_taskGraphArray_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_taskGraphArray_marshall1);

  return epidx;
}

void CkIndex_taskGraphArray::_call_taskGraphArray_marshall1(void* impl_msg, void* impl_obj_void)
{
  taskGraphArray* impl_obj = static_cast<taskGraphArray*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkVec<CkArrayIndex> &deps, const CkPointer<taskGraphSolver> &data, const CkCallback &returnResults*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkVec<CkArrayIndex>> deps;
  implP|deps;
  PUP::detail::TemporaryObjectHolder<CkPointer<taskGraphSolver>> data;
  implP|data;
  PUP::detail::TemporaryObjectHolder<CkCallback> returnResults;
  implP|returnResults;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) taskGraphArray(std::move(deps.t), std::move(data.t), std::move(returnResults.t));
}
int CkIndex_taskGraphArray::_callmarshall_taskGraphArray_marshall1(char* impl_buf, void* impl_obj_void) {
  taskGraphArray* impl_obj = static_cast<taskGraphArray*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkVec<CkArrayIndex> &deps, const CkPointer<taskGraphSolver> &data, const CkCallback &returnResults*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkVec<CkArrayIndex>> deps;
  implP|deps;
  PUP::detail::TemporaryObjectHolder<CkPointer<taskGraphSolver>> data;
  implP|data;
  PUP::detail::TemporaryObjectHolder<CkCallback> returnResults;
  implP|returnResults;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) taskGraphArray(std::move(deps.t), std::move(data.t), std::move(returnResults.t));
  return implP.size();
}
void CkIndex_taskGraphArray::_marshallmessagepup_taskGraphArray_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkVec<CkArrayIndex> &deps, const CkPointer<taskGraphSolver> &data, const CkCallback &returnResults*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkVec<CkArrayIndex>> deps;
  implP|deps;
  PUP::detail::TemporaryObjectHolder<CkPointer<taskGraphSolver>> data;
  implP|data;
  PUP::detail::TemporaryObjectHolder<CkCallback> returnResults;
  implP|returnResults;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("deps");
  implDestP|deps;
  if (implDestP.hasComments()) implDestP.comment("data");
  implDestP|data;
  if (implDestP.hasComments()) implDestP.comment("returnResults");
  implDestP|returnResults;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestData(const CkArrayIndex &from);
 */
void CProxy_taskGraphArray::requestData(const CkArrayIndex &from, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkArrayIndex &from
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)from;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)from;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_taskGraphArray::idx_requestData_marshall2(),0);
}

// Entry point registration function
int CkIndex_taskGraphArray::reg_requestData_marshall2() {
  int epidx = CkRegisterEp("requestData(const CkArrayIndex &from)",
      reinterpret_cast<CkCallFnPtr>(_call_requestData_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_requestData_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_requestData_marshall2);

  return epidx;
}

void CkIndex_taskGraphArray::_call_requestData_marshall2(void* impl_msg, void* impl_obj_void)
{
  taskGraphArray* impl_obj = static_cast<taskGraphArray*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkArrayIndex &from*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayIndex> from;
  implP|from;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->requestData(std::move(from.t));
}
int CkIndex_taskGraphArray::_callmarshall_requestData_marshall2(char* impl_buf, void* impl_obj_void) {
  taskGraphArray* impl_obj = static_cast<taskGraphArray*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkArrayIndex &from*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayIndex> from;
  implP|from;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->requestData(std::move(from.t));
  return implP.size();
}
void CkIndex_taskGraphArray::_marshallmessagepup_requestData_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkArrayIndex &from*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkArrayIndex> from;
  implP|from;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("from");
  implDestP|from;
}
PUPable_def(SINGLE_ARG(Closure_taskGraphArray::requestData_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void depositData(const CkPointer<taskGraphSolver> &data);
 */
void CProxy_taskGraphArray::depositData(const CkPointer<taskGraphSolver> &data, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkPointer<taskGraphSolver> &data
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkPointer<taskGraphSolver>>::type>::type &)data;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkPointer<taskGraphSolver>>::type>::type &)data;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_taskGraphArray::idx_depositData_marshall3(),0);
}

// Entry point registration function
int CkIndex_taskGraphArray::reg_depositData_marshall3() {
  int epidx = CkRegisterEp("depositData(const CkPointer<taskGraphSolver> &data)",
      reinterpret_cast<CkCallFnPtr>(_call_depositData_marshall3), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_depositData_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_depositData_marshall3);

  return epidx;
}

void CkIndex_taskGraphArray::_call_depositData_marshall3(void* impl_msg, void* impl_obj_void)
{
  taskGraphArray* impl_obj = static_cast<taskGraphArray*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkPointer<taskGraphSolver> &data*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkPointer<taskGraphSolver>> data;
  implP|data;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->depositData(std::move(data.t));
}
int CkIndex_taskGraphArray::_callmarshall_depositData_marshall3(char* impl_buf, void* impl_obj_void) {
  taskGraphArray* impl_obj = static_cast<taskGraphArray*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkPointer<taskGraphSolver> &data*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkPointer<taskGraphSolver>> data;
  implP|data;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->depositData(std::move(data.t));
  return implP.size();
}
void CkIndex_taskGraphArray::_marshallmessagepup_depositData_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkPointer<taskGraphSolver> &data*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkPointer<taskGraphSolver>> data;
  implP|data;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("data");
  implDestP|data;
}
PUPable_def(SINGLE_ARG(Closure_taskGraphArray::depositData_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void deleteElement();
 */
void CProxy_taskGraphArray::deleteElement(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_taskGraphArray::idx_deleteElement_void(),0);
}

// Entry point registration function
int CkIndex_taskGraphArray::reg_deleteElement_void() {
  int epidx = CkRegisterEp("deleteElement()",
      reinterpret_cast<CkCallFnPtr>(_call_deleteElement_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_taskGraphArray::_call_deleteElement_void(void* impl_msg, void* impl_obj_void)
{
  taskGraphArray* impl_obj = static_cast<taskGraphArray*>(impl_obj_void);
  impl_obj->deleteElement();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_taskGraphArray::deleteElement_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: taskGraphArray(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_taskGraphArray::reg_taskGraphArray_CkMigrateMessage() {
  int epidx = CkRegisterEp("taskGraphArray(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_taskGraphArray_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_taskGraphArray::_call_taskGraphArray_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<taskGraphArray> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: taskGraphArray(const CkVec<CkArrayIndex> &deps, const CkPointer<taskGraphSolver> &data, const CkCallback &returnResults);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void requestData(const CkArrayIndex &from);
 */
void CProxySection_taskGraphArray::requestData(const CkArrayIndex &from, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkArrayIndex &from
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)from;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkArrayIndex>::type>::type &)from;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_taskGraphArray::idx_requestData_marshall2(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void depositData(const CkPointer<taskGraphSolver> &data);
 */
void CProxySection_taskGraphArray::depositData(const CkPointer<taskGraphSolver> &data, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkPointer<taskGraphSolver> &data
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkPointer<taskGraphSolver>>::type>::type &)data;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkPointer<taskGraphSolver>>::type>::type &)data;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_taskGraphArray::idx_depositData_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void deleteElement();
 */
void CProxySection_taskGraphArray::deleteElement(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_taskGraphArray::idx_deleteElement_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: taskGraphArray(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_taskGraphArray::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, -1);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: taskGraphArray(const CkVec<CkArrayIndex> &deps, const CkPointer<taskGraphSolver> &data, const CkCallback &returnResults);
  idx_taskGraphArray_marshall1();

  // REG: void requestData(const CkArrayIndex &from);
  idx_requestData_marshall2();

  // REG: void depositData(const CkPointer<taskGraphSolver> &data);
  idx_depositData_marshall3();

  // REG: void deleteElement();
  idx_deleteElement_void();

  // REG: taskGraphArray(CkMigrateMessage* impl_msg);
  idx_taskGraphArray_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_taskGraphArray_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registertaskGraph(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message callbackMsg;
*/
CMessage_callbackMsg::__register("callbackMsg", sizeof(callbackMsg),(CkPackFnPtr) callbackMsg::pack,(CkUnpackFnPtr) callbackMsg::unpack);

/* REG: array taskGraphArray: ArrayElement{
taskGraphArray(const CkVec<CkArrayIndex> &deps, const CkPointer<taskGraphSolver> &data, const CkCallback &returnResults);
void requestData(const CkArrayIndex &from);
void depositData(const CkPointer<taskGraphSolver> &data);
void deleteElement();
taskGraphArray(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_taskGraphArray::__register("taskGraphArray", sizeof(taskGraphArray));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_taskGraphArray::virtual_pup(PUP::er &p) {
    recursive_pup<taskGraphArray>(dynamic_cast<taskGraphArray*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
