
/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TCharm::atBarrier_2_closure : public SDAG::Closure {
      

      atBarrier_2_closure() {
        init();
      }
      atBarrier_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~atBarrier_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(atBarrier_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TCharm::start_4_closure : public SDAG::Closure {
      

      start_4_closure() {
        init();
      }
      start_4_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~start_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(start_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TCharm::callSystem_5_closure : public SDAG::Closure {
            callSystemStruct s;


      callSystem_5_closure() {
        init();
      }
      callSystem_5_closure(CkMigrateMessage*) {
        init();
      }
            callSystemStruct & getP0() { return s;}
      void pup(PUP::er& __p) {
        __p | s;
        packClosure(__p);
      }
      virtual ~callSystem_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(callSystem_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */



#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: message TCharmInitMsg{
char data[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_TCharmInitMsg::operator new(size_t s){
  return TCharmInitMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_TCharmInitMsg::operator new(size_t s, int* sz){
  return TCharmInitMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_TCharmInitMsg::operator new(size_t s, int* sz,const int pb){
  return TCharmInitMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_TCharmInitMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return TCharmInitMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_TCharmInitMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return TCharmInitMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_TCharmInitMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return TCharmInitMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_TCharmInitMsg::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return TCharmInitMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_TCharmInitMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(char)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_TCharmInitMsg::CMessage_TCharmInitMsg() {
TCharmInitMsg *newmsg = (TCharmInitMsg *)this;
  newmsg->data = (char *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_TCharmInitMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_TCharmInitMsg::pack(TCharmInitMsg *msg) {
  msg->data = (char *) ((char *)msg->data - (char *)msg);
  return (void *) msg;
}
TCharmInitMsg* CMessage_TCharmInitMsg::unpack(void* buf) {
  TCharmInitMsg *msg = (TCharmInitMsg *) buf;
  msg->data = (char *) ((size_t)msg->data + (char *)msg);
  return msg;
}
int CMessage_TCharmInitMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array TCharm: ArrayElement{
TCharm(TCharmInitMsg* impl_msg);
void atBarrier();
void atExit(CkReductionMsg* impl_msg);
void start();
void callSystem(const callSystemStruct &s);
  initcall void procInit(void);
  initcall void nodeInit(void);
TCharm(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_TCharm::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_TCharm::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_TCharm::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_TCharm::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_TCharm::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_TCharm::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_TCharm::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: TCharm(TCharmInitMsg* impl_msg);
 */
void CProxyElement_TCharm::insert(TCharmInitMsg* impl_msg, int onPE)
{ 
    UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_TCharm::idx_TCharm_TCharmInitMsg(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void atBarrier();
 */
void CProxyElement_TCharm::atBarrier(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TCharm::idx_atBarrier_void(),0);
}
void CkIndex_TCharm::_call_redn_wrapper_atBarrier_void(void* impl_msg, void* impl_obj_void)
{
  TCharm* impl_obj = static_cast<TCharm*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->atBarrier();
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void atExit(CkReductionMsg* impl_msg);
 */
void CProxyElement_TCharm::atExit(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TCharm::idx_atExit_CkReductionMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void start();
 */
void CProxyElement_TCharm::start(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TCharm::idx_start_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void callSystem(const callSystemStruct &s);
 */
void CProxyElement_TCharm::callSystem(const callSystemStruct &s, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const callSystemStruct &s
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<callSystemStruct>::type>::type &)s;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<callSystemStruct>::type>::type &)s;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TCharm::idx_callSystem_marshall5(),0);
}
#endif /* CK_TEMPLATES_ONLY */



#ifndef CK_TEMPLATES_ONLY
/* DEFS: TCharm(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TCharm(TCharmInitMsg* impl_msg);
 */
CkArrayID CProxy_TCharm::ckNew(TCharmInitMsg* impl_msg, const CkArrayOptions &opts)
{
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_TCharm::idx_TCharm_TCharmInitMsg(), opts);
  return gId;
}
void CProxy_TCharm::ckNew(TCharmInitMsg* impl_msg, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb)
{
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_TCharm::idx_TCharm_TCharmInitMsg(), _ck_array_creation_cb, opts, impl_msg);
}
CkArrayID CProxy_TCharm::ckNew(TCharmInitMsg* impl_msg, const int s1)
{
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_TCharm::idx_TCharm_TCharmInitMsg(), opts);
  return gId;
}
void CProxy_TCharm::ckNew(TCharmInitMsg* impl_msg, const int s1, CkCallback _ck_array_creation_cb)
{
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_TCharm::idx_TCharm_TCharmInitMsg(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_TCharm::reg_TCharm_TCharmInitMsg() {
  int epidx = CkRegisterEp("TCharm(TCharmInitMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_TCharm_TCharmInitMsg), CMessage_TCharmInitMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)TCharmInitMsg::ckDebugPup);
  return epidx;
}

void CkIndex_TCharm::_call_TCharm_TCharmInitMsg(void* impl_msg, void* impl_obj_void)
{
  TCharm* impl_obj = static_cast<TCharm*>(impl_obj_void);
  new (impl_obj_void) TCharm((TCharmInitMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void atBarrier();
 */
void CProxy_TCharm::atBarrier(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TCharm::idx_atBarrier_void(),0);
}

// Entry point registration function
int CkIndex_TCharm::reg_atBarrier_void() {
  int epidx = CkRegisterEp("atBarrier()",
      reinterpret_cast<CkCallFnPtr>(_call_atBarrier_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_TCharm::reg_redn_wrapper_atBarrier_void() {
  return CkRegisterEp("redn_wrapper_atBarrier(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_atBarrier_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_TCharm::_call_atBarrier_void(void* impl_msg, void* impl_obj_void)
{
  TCharm* impl_obj = static_cast<TCharm*>(impl_obj_void);
  impl_obj->atBarrier();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_TCharm::atBarrier_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void atExit(CkReductionMsg* impl_msg);
 */
void CProxy_TCharm::atExit(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TCharm::idx_atExit_CkReductionMsg(),0);
}

// Entry point registration function
int CkIndex_TCharm::reg_atExit_CkReductionMsg() {
  int epidx = CkRegisterEp("atExit(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_atExit_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}

void CkIndex_TCharm::_call_atExit_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  TCharm* impl_obj = static_cast<TCharm*>(impl_obj_void);
  impl_obj->atExit((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void start();
 */
void CProxy_TCharm::start(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TCharm::idx_start_void(),0);
}

// Entry point registration function
int CkIndex_TCharm::reg_start_void() {
  int epidx = CkRegisterEp("start()",
      reinterpret_cast<CkCallFnPtr>(_call_start_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_TCharm::_call_start_void(void* impl_msg, void* impl_obj_void)
{
  TCharm* impl_obj = static_cast<TCharm*>(impl_obj_void);
  impl_obj->start();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_TCharm::start_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void callSystem(const callSystemStruct &s);
 */
void CProxy_TCharm::callSystem(const callSystemStruct &s, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const callSystemStruct &s
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<callSystemStruct>::type>::type &)s;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<callSystemStruct>::type>::type &)s;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TCharm::idx_callSystem_marshall5(),0);
}

// Entry point registration function
int CkIndex_TCharm::reg_callSystem_marshall5() {
  int epidx = CkRegisterEp("callSystem(const callSystemStruct &s)",
      reinterpret_cast<CkCallFnPtr>(_call_callSystem_marshall5), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_callSystem_marshall5);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_callSystem_marshall5);

  return epidx;
}

void CkIndex_TCharm::_call_callSystem_marshall5(void* impl_msg, void* impl_obj_void)
{
  TCharm* impl_obj = static_cast<TCharm*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const callSystemStruct &s*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<callSystemStruct> s;
  implP|s;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->callSystem(std::move(s.t));
}
int CkIndex_TCharm::_callmarshall_callSystem_marshall5(char* impl_buf, void* impl_obj_void) {
  TCharm* impl_obj = static_cast<TCharm*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const callSystemStruct &s*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<callSystemStruct> s;
  implP|s;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->callSystem(std::move(s.t));
  return implP.size();
}
void CkIndex_TCharm::_marshallmessagepup_callSystem_marshall5(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const callSystemStruct &s*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<callSystemStruct> s;
  implP|s;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("s");
  implDestP|s;
}
PUPable_def(SINGLE_ARG(Closure_TCharm::callSystem_5_closure))
#endif /* CK_TEMPLATES_ONLY */



#ifndef CK_TEMPLATES_ONLY
/* DEFS: TCharm(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_TCharm::reg_TCharm_CkMigrateMessage() {
  int epidx = CkRegisterEp("TCharm(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_TCharm_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_TCharm::_call_TCharm_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<TCharm> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TCharm(TCharmInitMsg* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void atBarrier();
 */
void CProxySection_TCharm::atBarrier(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TCharm::idx_atBarrier_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void atExit(CkReductionMsg* impl_msg);
 */
void CProxySection_TCharm::atExit(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TCharm::idx_atExit_CkReductionMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void start();
 */
void CProxySection_TCharm::start(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TCharm::idx_start_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void callSystem(const callSystemStruct &s);
 */
void CProxySection_TCharm::callSystem(const callSystemStruct &s, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const callSystemStruct &s
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<callSystemStruct>::type>::type &)s;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<callSystemStruct>::type>::type &)s;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TCharm::idx_callSystem_marshall5(),0);
}
#endif /* CK_TEMPLATES_ONLY */



#ifndef CK_TEMPLATES_ONLY
/* DEFS: TCharm(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_TCharm::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, 1);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: TCharm(TCharmInitMsg* impl_msg);
  idx_TCharm_TCharmInitMsg();

  // REG: void atBarrier();
  idx_atBarrier_void();
  idx_redn_wrapper_atBarrier_void();

  // REG: void atExit(CkReductionMsg* impl_msg);
  idx_atExit_CkReductionMsg();

  // REG: void start();
  idx_start_void();

  // REG: void callSystem(const callSystemStruct &s);
  idx_callSystem_marshall5();

  _registerInitCall(TCharm::procInit,0);

  _registerInitCall(TCharm::nodeInit,1);

  // REG: TCharm(CkMigrateMessage* impl_msg);
  idx_TCharm_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_TCharm_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registertcharm(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message TCharmInitMsg{
char data[];
}
;
*/
CMessage_TCharmInitMsg::__register("TCharmInitMsg", sizeof(TCharmInitMsg),(CkPackFnPtr) TCharmInitMsg::pack,(CkUnpackFnPtr) TCharmInitMsg::unpack);

/* REG: array TCharm: ArrayElement{
TCharm(TCharmInitMsg* impl_msg);
void atBarrier();
void atExit(CkReductionMsg* impl_msg);
void start();
void callSystem(const callSystemStruct &s);
  initcall void procInit(void);
  initcall void nodeInit(void);
TCharm(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_TCharm::__register("TCharm", sizeof(TCharm));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_TCharm::virtual_pup(PUP::er &p) {
    recursive_pup<TCharm>(dynamic_cast<TCharm*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
