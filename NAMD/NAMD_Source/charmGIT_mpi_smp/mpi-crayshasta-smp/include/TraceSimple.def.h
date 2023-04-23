/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */




/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: mainchare TraceSimpleInit: Chare{
TraceSimpleInit(CkArgMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_TraceSimpleInit::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceSimpleInit(CkArgMsg* impl_msg);
 */
CkChareID CProxy_TraceSimpleInit::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_TraceSimpleInit::__idx, CkIndex_TraceSimpleInit::idx_TraceSimpleInit_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_TraceSimpleInit::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_TraceSimpleInit::__idx, CkIndex_TraceSimpleInit::idx_TraceSimpleInit_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function
int CkIndex_TraceSimpleInit::reg_TraceSimpleInit_CkArgMsg() {
  int epidx = CkRegisterEp("TraceSimpleInit(CkArgMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_TraceSimpleInit_CkArgMsg), CMessage_CkArgMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}

void CkIndex_TraceSimpleInit::_call_TraceSimpleInit_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  TraceSimpleInit* impl_obj = static_cast<TraceSimpleInit*>(impl_obj_void);
  new (impl_obj_void) TraceSimpleInit((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_TraceSimpleInit::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: TraceSimpleInit(CkArgMsg* impl_msg);
  idx_TraceSimpleInit_CkArgMsg();
  CkRegisterMainChare(__idx, idx_TraceSimpleInit_CkArgMsg());

}
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: readonly CkGroupID traceSimpleGID;
 */
extern CkGroupID traceSimpleGID;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_traceSimpleGID(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|traceSimpleGID;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group TraceSimpleBOC: IrrGroup{
TraceSimpleBOC();
TraceSimpleBOC(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_TraceSimpleBOC::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceSimpleBOC();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceSimpleBOC(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceSimpleBOC();
 */
CkGroupID CProxy_TraceSimpleBOC::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_TraceSimpleBOC::__idx, CkIndex_TraceSimpleBOC::idx_TraceSimpleBOC_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_TraceSimpleBOC::reg_TraceSimpleBOC_void() {
  int epidx = CkRegisterEp("TraceSimpleBOC()",
      reinterpret_cast<CkCallFnPtr>(_call_TraceSimpleBOC_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_TraceSimpleBOC::_call_TraceSimpleBOC_void(void* impl_msg, void* impl_obj_void)
{
  TraceSimpleBOC* impl_obj = static_cast<TraceSimpleBOC*>(impl_obj_void);
  new (impl_obj_void) TraceSimpleBOC();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceSimpleBOC(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_TraceSimpleBOC::reg_TraceSimpleBOC_CkMigrateMessage() {
  int epidx = CkRegisterEp("TraceSimpleBOC(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_TraceSimpleBOC_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_TraceSimpleBOC::_call_TraceSimpleBOC_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  new (impl_obj_void) TraceSimpleBOC((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceSimpleBOC();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TraceSimpleBOC(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_TraceSimpleBOC::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,TraceSimpleBOC::isIrreducible());
  // REG: TraceSimpleBOC();
  idx_TraceSimpleBOC_void();
  CkRegisterDefaultCtor(__idx, idx_TraceSimpleBOC_void());

  // REG: TraceSimpleBOC(CkMigrateMessage* impl_msg);
  idx_TraceSimpleBOC_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_TraceSimpleBOC_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerTraceSimple(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: mainchare TraceSimpleInit: Chare{
TraceSimpleInit(CkArgMsg* impl_msg);
};
*/
  CkIndex_TraceSimpleInit::__register("TraceSimpleInit", sizeof(TraceSimpleInit));

  _registerInitCall(initTraceSimpleBOC,1);

  CkRegisterReadonly("traceSimpleGID","CkGroupID",sizeof(traceSimpleGID),(void *) &traceSimpleGID,__xlater_roPup_traceSimpleGID);

/* REG: group TraceSimpleBOC: IrrGroup{
TraceSimpleBOC();
TraceSimpleBOC(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_TraceSimpleBOC::__register("TraceSimpleBOC", sizeof(TraceSimpleBOC));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_TraceSimpleInit::virtual_pup(PUP::er &p) {
    recursive_pup<TraceSimpleInit>(dynamic_cast<TraceSimpleInit*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_TraceSimpleBOC::virtual_pup(PUP::er &p) {
    recursive_pup<TraceSimpleBOC>(dynamic_cast<TraceSimpleBOC*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
