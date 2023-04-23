
/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: readonly CkGroupID TempMemID;
 */
extern CkGroupID TempMemID;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_TempMemID(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|TempMemID;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group TimePool: IrrGroup{
TimePool();
TimePool(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_TimePool::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: TimePool();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TimePool(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TimePool();
 */
CkGroupID CProxy_TimePool::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_TimePool::__idx, CkIndex_TimePool::idx_TimePool_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_TimePool::reg_TimePool_void() {
  int epidx = CkRegisterEp("TimePool()",
      reinterpret_cast<CkCallFnPtr>(_call_TimePool_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_TimePool::_call_TimePool_void(void* impl_msg, void* impl_obj_void)
{
  TimePool* impl_obj = static_cast<TimePool*>(impl_obj_void);
  new (impl_obj_void) TimePool();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TimePool(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_TimePool::reg_TimePool_CkMigrateMessage() {
  int epidx = CkRegisterEp("TimePool(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_TimePool_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_TimePool::_call_TimePool_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) TimePool((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TimePool();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TimePool(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_TimePool::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,TimePool::isIrreducible());
  // REG: TimePool();
  idx_TimePool_void();
  CkRegisterDefaultCtor(__idx, idx_TimePool_void());

  // REG: TimePool(CkMigrateMessage* impl_msg);
  idx_TimePool_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_TimePool_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registermemory_temporal(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  CkRegisterReadonly("TempMemID","CkGroupID",sizeof(TempMemID),(void *) &TempMemID,__xlater_roPup_TempMemID);

/* REG: group TimePool: IrrGroup{
TimePool();
TimePool(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_TimePool::__register("TimePool", sizeof(TimePool));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_TimePool::virtual_pup(PUP::er &p) {
    recursive_pup<TimePool>(dynamic_cast<TimePool*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
