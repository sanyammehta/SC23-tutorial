

/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: readonly CkGroupID EvmPoolID;
 */
extern CkGroupID EvmPoolID;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_EvmPoolID(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|EvmPoolID;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message PoolInitMsg;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_PoolInitMsg::operator new(size_t s){
  return PoolInitMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_PoolInitMsg::operator new(size_t s, int* sz){
  return PoolInitMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_PoolInitMsg::operator new(size_t s, int* sz,const int pb){
  return PoolInitMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_PoolInitMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return PoolInitMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_PoolInitMsg::operator new(size_t s, const int p) {
  return PoolInitMsg::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_PoolInitMsg::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return PoolInitMsg::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_PoolInitMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_PoolInitMsg::CMessage_PoolInitMsg() {
PoolInitMsg *newmsg = (PoolInitMsg *)this;
}
void CMessage_PoolInitMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_PoolInitMsg::pack(PoolInitMsg *msg) {
  return (void *) msg;
}
PoolInitMsg* CMessage_PoolInitMsg::unpack(void* buf) {
  PoolInitMsg *msg = (PoolInitMsg *) buf;
  return msg;
}
int CMessage_PoolInitMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group EventMsgPool: IrrGroup{
EventMsgPool(PoolInitMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_EventMsgPool::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: EventMsgPool(PoolInitMsg* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: EventMsgPool(PoolInitMsg* impl_msg);
 */
CkGroupID CProxy_EventMsgPool::ckNew(PoolInitMsg* impl_msg)
{
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_EventMsgPool::__idx, CkIndex_EventMsgPool::idx_EventMsgPool_PoolInitMsg(), impl_msg);
  return gId;
}
  CProxy_EventMsgPool::CProxy_EventMsgPool(PoolInitMsg* impl_msg)
{
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  ckSetGroupID(CkCreateGroup(CkIndex_EventMsgPool::__idx, CkIndex_EventMsgPool::idx_EventMsgPool_PoolInitMsg(), impl_msg));
}

// Entry point registration function
int CkIndex_EventMsgPool::reg_EventMsgPool_PoolInitMsg() {
  int epidx = CkRegisterEp("EventMsgPool(PoolInitMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_EventMsgPool_PoolInitMsg), CMessage_PoolInitMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)PoolInitMsg::ckDebugPup);
  return epidx;
}

void CkIndex_EventMsgPool::_call_EventMsgPool_PoolInitMsg(void* impl_msg, void* impl_obj_void)
{
  EventMsgPool* impl_obj = static_cast<EventMsgPool*>(impl_obj_void);
  new (impl_obj_void) EventMsgPool((PoolInitMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: EventMsgPool(PoolInitMsg* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_EventMsgPool::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,EventMsgPool::isIrreducible());
  // REG: EventMsgPool(PoolInitMsg* impl_msg);
  idx_EventMsgPool_PoolInitMsg();

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerevmpool(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  CkRegisterReadonly("EvmPoolID","CkGroupID",sizeof(EvmPoolID),(void *) &EvmPoolID,__xlater_roPup_EvmPoolID);

/* REG: message PoolInitMsg;
*/
CMessage_PoolInitMsg::__register("PoolInitMsg", sizeof(PoolInitMsg),(CkPackFnPtr) PoolInitMsg::pack,(CkUnpackFnPtr) PoolInitMsg::unpack);

/* REG: group EventMsgPool: IrrGroup{
EventMsgPool(PoolInitMsg* impl_msg);
};
*/
  CkIndex_EventMsgPool::__register("EventMsgPool", sizeof(EventMsgPool));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_EventMsgPool::virtual_pup(PUP::er &p) {
    recursive_pup<EventMsgPool>(dynamic_cast<EventMsgPool*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
