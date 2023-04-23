
/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: readonly CkGroupID MemPoolID;
 */
extern CkGroupID MemPoolID;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_MemPoolID(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|MemPoolID;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group MemoryPool: IrrGroup{
MemoryPool();
MemoryPool(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_MemoryPool::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: MemoryPool();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MemoryPool(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MemoryPool();
 */
CkGroupID CProxy_MemoryPool::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_MemoryPool::__idx, CkIndex_MemoryPool::idx_MemoryPool_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_MemoryPool::reg_MemoryPool_void() {
  int epidx = CkRegisterEp("MemoryPool()",
      reinterpret_cast<CkCallFnPtr>(_call_MemoryPool_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_MemoryPool::_call_MemoryPool_void(void* impl_msg, void* impl_obj_void)
{
  MemoryPool* impl_obj = static_cast<MemoryPool*>(impl_obj_void);
  new (impl_obj_void) MemoryPool();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MemoryPool(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_MemoryPool::reg_MemoryPool_CkMigrateMessage() {
  int epidx = CkRegisterEp("MemoryPool(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_MemoryPool_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_MemoryPool::_call_MemoryPool_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) MemoryPool((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MemoryPool();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: MemoryPool(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_MemoryPool::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,MemoryPool::isIrreducible());
  // REG: MemoryPool();
  idx_MemoryPool_void();
  CkRegisterDefaultCtor(__idx, idx_MemoryPool_void());

  // REG: MemoryPool(CkMigrateMessage* impl_msg);
  idx_MemoryPool_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_MemoryPool_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registermempool(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  CkRegisterReadonly("MemPoolID","CkGroupID",sizeof(MemPoolID),(void *) &MemPoolID,__xlater_roPup_MemPoolID);

/* REG: group MemoryPool: IrrGroup{
MemoryPool();
MemoryPool(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_MemoryPool::__register("MemoryPool", sizeof(MemoryPool));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_MemoryPool::virtual_pup(PUP::er &p) {
    recursive_pup<MemoryPool>(dynamic_cast<MemoryPool*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
