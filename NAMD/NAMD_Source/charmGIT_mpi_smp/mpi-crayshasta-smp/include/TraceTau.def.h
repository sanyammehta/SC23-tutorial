/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */




/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: mainchare TraceTauInit: Chare{
TraceTauInit(CkArgMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_TraceTauInit::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceTauInit(CkArgMsg* impl_msg);
 */
CkChareID CProxy_TraceTauInit::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_TraceTauInit::__idx, CkIndex_TraceTauInit::idx_TraceTauInit_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_TraceTauInit::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_TraceTauInit::__idx, CkIndex_TraceTauInit::idx_TraceTauInit_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function
int CkIndex_TraceTauInit::reg_TraceTauInit_CkArgMsg() {
  int epidx = CkRegisterEp("TraceTauInit(CkArgMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_TraceTauInit_CkArgMsg), CMessage_CkArgMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}

void CkIndex_TraceTauInit::_call_TraceTauInit_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  TraceTauInit* impl_obj = static_cast<TraceTauInit*>(impl_obj_void);
  new (impl_obj_void) TraceTauInit((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_TraceTauInit::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: TraceTauInit(CkArgMsg* impl_msg);
  idx_TraceTauInit_CkArgMsg();
  CkRegisterMainChare(__idx, idx_TraceTauInit_CkArgMsg());

}
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: readonly CkGroupID traceTauGID;
 */
extern CkGroupID traceTauGID;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_traceTauGID(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|traceTauGID;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group TraceTauBOC: IrrGroup{
TraceTauBOC();
TraceTauBOC(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_TraceTauBOC::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceTauBOC();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceTauBOC(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceTauBOC();
 */
CkGroupID CProxy_TraceTauBOC::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_TraceTauBOC::__idx, CkIndex_TraceTauBOC::idx_TraceTauBOC_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_TraceTauBOC::reg_TraceTauBOC_void() {
  int epidx = CkRegisterEp("TraceTauBOC()",
      reinterpret_cast<CkCallFnPtr>(_call_TraceTauBOC_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_TraceTauBOC::_call_TraceTauBOC_void(void* impl_msg, void* impl_obj_void)
{
  TraceTauBOC* impl_obj = static_cast<TraceTauBOC*>(impl_obj_void);
  new (impl_obj_void) TraceTauBOC();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceTauBOC(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_TraceTauBOC::reg_TraceTauBOC_CkMigrateMessage() {
  int epidx = CkRegisterEp("TraceTauBOC(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_TraceTauBOC_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_TraceTauBOC::_call_TraceTauBOC_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) TraceTauBOC((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceTauBOC();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceTauBOC(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_TraceTauBOC::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,TraceTauBOC::isIrreducible());
  // REG: TraceTauBOC();
  idx_TraceTauBOC_void();
  CkRegisterDefaultCtor(__idx, idx_TraceTauBOC_void());

  // REG: TraceTauBOC(CkMigrateMessage* impl_msg);
  idx_TraceTauBOC_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_TraceTauBOC_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerTraceTau(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: mainchare TraceTauInit: Chare{
TraceTauInit(CkArgMsg* impl_msg);
};
*/
  CkIndex_TraceTauInit::__register("TraceTauInit", sizeof(TraceTauInit));

  _registerInitCall(initTraceTauBOC,1);

  CkRegisterReadonly("traceTauGID","CkGroupID",sizeof(traceTauGID),(void *) &traceTauGID,__xlater_roPup_traceTauGID);

/* REG: group TraceTauBOC: IrrGroup{
TraceTauBOC();
TraceTauBOC(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_TraceTauBOC::__register("TraceTauBOC", sizeof(TraceTauBOC));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_TraceTauInit::virtual_pup(PUP::er &p) {
    recursive_pup<TraceTauInit>(dynamic_cast<TraceTauInit*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_TraceTauBOC::virtual_pup(PUP::er &p) {
    recursive_pup<TraceTauBOC>(dynamic_cast<TraceTauBOC*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
