
/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_receiver::ready2go_4_closure : public SDAG::Closure {
      

      ready2go_4_closure() {
        init();
      }
      ready2go_4_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~ready2go_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(ready2go_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: message receiverMsg{
char buf[];
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_receiverMsg::operator new(size_t s){
  return receiverMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_receiverMsg::operator new(size_t s, int* sz){
  return receiverMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_receiverMsg::operator new(size_t s, int* sz,const int pb){
  return receiverMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_receiverMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return receiverMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_receiverMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return receiverMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_receiverMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return receiverMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_receiverMsg::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return receiverMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_receiverMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(char)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_receiverMsg::CMessage_receiverMsg() {
receiverMsg *newmsg = (receiverMsg *)this;
  newmsg->buf = (char *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_receiverMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_receiverMsg::pack(receiverMsg *msg) {
  msg->buf = (char *) ((char *)msg->buf - (char *)msg);
  return (void *) msg;
}
receiverMsg* CMessage_receiverMsg::unpack(void* buf) {
  receiverMsg *msg = (receiverMsg *) buf;
  msg->buf = (char *) ((size_t)msg->buf + (char *)msg);
  return msg;
}
int CMessage_receiverMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array receiver: ArrayElement{
receiver();
void generic(receiverMsg* impl_msg);
threaded sync void syncSend(receiverMsg* impl_msg);
void ready2go();
receiver(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_receiver::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_receiver::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_receiver::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_receiver::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_receiver::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_receiver::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_receiver::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: receiver();
 */
void CProxyElement_receiver::insert(int onPE, const CkEntryOptions *impl_e_opts)
{ 
   void *impl_msg = CkAllocSysMsg(impl_e_opts);
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_receiver::idx_receiver_void(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void generic(receiverMsg* impl_msg);
 */
void CProxyElement_receiver::generic(receiverMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_receiver::idx_generic_receiverMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded sync void syncSend(receiverMsg* impl_msg);
 */
void CProxyElement_receiver::syncSend(receiverMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  void *impl_msg_typed_ret = ckSendSync(impl_amsg, CkIndex_receiver::idx_syncSend_receiverMsg());
  CkFreeSysMsg(impl_msg_typed_ret); 
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ready2go();
 */
void CProxyElement_receiver::ready2go(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_receiver::idx_ready2go_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: receiver(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: receiver();
 */
CkArrayID CProxy_receiver::ckNew(const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_receiver::idx_receiver_void(), opts);
  return gId;
}
void CProxy_receiver::ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_receiver::idx_receiver_void(), _ck_array_creation_cb, opts, impl_msg);
}
CkArrayID CProxy_receiver::ckNew(const int s1, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_receiver::idx_receiver_void(), opts);
  return gId;
}
void CProxy_receiver::ckNew(const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_receiver::idx_receiver_void(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_receiver::reg_receiver_void() {
  int epidx = CkRegisterEp("receiver()",
      reinterpret_cast<CkCallFnPtr>(_call_receiver_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_receiver::_call_receiver_void(void* impl_msg, void* impl_obj_void)
{
  receiver* impl_obj = static_cast<receiver*>(impl_obj_void);
  new (impl_obj_void) receiver();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void generic(receiverMsg* impl_msg);
 */
void CProxy_receiver::generic(receiverMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_receiver::idx_generic_receiverMsg(),0);
}

// Entry point registration function
int CkIndex_receiver::reg_generic_receiverMsg() {
  int epidx = CkRegisterEp("generic(receiverMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_generic_receiverMsg), CMessage_receiverMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)receiverMsg::ckDebugPup);
  return epidx;
}

void CkIndex_receiver::_call_generic_receiverMsg(void* impl_msg, void* impl_obj_void)
{
  receiver* impl_obj = static_cast<receiver*>(impl_obj_void);
  impl_obj->generic((receiverMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded sync void syncSend(receiverMsg* impl_msg);
 */

// Entry point registration function
int CkIndex_receiver::reg_syncSend_receiverMsg() {
  int epidx = CkRegisterEp("syncSend(receiverMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_syncSend_receiverMsg), CMessage_receiverMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)receiverMsg::ckDebugPup);
  return epidx;
}

void CkIndex_receiver::_call_syncSend_receiverMsg(void* impl_msg, void* impl_obj_void)
{
  receiver* impl_obj = static_cast<receiver*>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_syncSend_receiverMsg, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthTraceResume(tid);
  CthResume(tid);
}
void CkIndex_receiver::_callthr_syncSend_receiverMsg(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  void *impl_obj_void = impl_arg->obj;
  receiver *impl_obj = static_cast<receiver *>(impl_obj_void);
  delete impl_arg;
  int impl_ref = CkGetRefNum(impl_msg), impl_src = CkGetSrcPe(impl_msg);
  void *impl_retMsg=CkAllocSysMsg();
    impl_obj->syncSend((receiverMsg*)impl_msg);
  CkSendToFutureID(impl_ref, impl_retMsg, impl_src);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ready2go();
 */
void CProxy_receiver::ready2go(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_receiver::idx_ready2go_void(),0);
}

// Entry point registration function
int CkIndex_receiver::reg_ready2go_void() {
  int epidx = CkRegisterEp("ready2go()",
      reinterpret_cast<CkCallFnPtr>(_call_ready2go_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_receiver::_call_ready2go_void(void* impl_msg, void* impl_obj_void)
{
  receiver* impl_obj = static_cast<receiver*>(impl_obj_void);
  impl_obj->ready2go();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_receiver::ready2go_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: receiver(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_receiver::reg_receiver_CkMigrateMessage() {
  int epidx = CkRegisterEp("receiver(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_receiver_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_receiver::_call_receiver_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<receiver> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: receiver();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void generic(receiverMsg* impl_msg);
 */
void CProxySection_receiver::generic(receiverMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_receiver::idx_generic_receiverMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded sync void syncSend(receiverMsg* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ready2go();
 */
void CProxySection_receiver::ready2go(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_receiver::idx_ready2go_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: receiver(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_receiver::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, 1);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: receiver();
  idx_receiver_void();
  CkRegisterDefaultCtor(__idx, idx_receiver_void());

  // REG: void generic(receiverMsg* impl_msg);
  idx_generic_receiverMsg();

  // REG: threaded sync void syncSend(receiverMsg* impl_msg);
  idx_syncSend_receiverMsg();

  // REG: void ready2go();
  idx_ready2go_void();

  // REG: receiver(CkMigrateMessage* impl_msg);
  idx_receiver_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_receiver_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerreceiver(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: message receiverMsg{
char buf[];
}
;
*/
CMessage_receiverMsg::__register("receiverMsg", sizeof(receiverMsg),(CkPackFnPtr) receiverMsg::pack,(CkUnpackFnPtr) receiverMsg::unpack);

/* REG: array receiver: ArrayElement{
receiver();
void generic(receiverMsg* impl_msg);
threaded sync void syncSend(receiverMsg* impl_msg);
void ready2go();
receiver(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_receiver::__register("receiver", sizeof(receiver));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_receiver::virtual_pup(PUP::er &p) {
    recursive_pup<receiver>(dynamic_cast<receiver*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
